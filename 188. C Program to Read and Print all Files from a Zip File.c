// C Program to Read and Print all Files from a Zip File

#include <stdio.h>  
#include <stdlib.h>  
#include <zip.h>  

int main(int argc, char *argv[]) {  
    if (argc != 2) {  
        printf("Usage: %s <zipfile>\n", argv[0]);  
        return 1;  
    }  

    int err = 0;  
    zip_t *archive = zip_open(argv[1], ZIP_RDONLY, &err);  
    if (!archive) {  
        printf("Failed to open zip: error %d\n", err);  
        return 1;  
    }  

    zip_int64_t n = zip_get_num_entries(archive, 0);  
    for (zip_int64_t i = 0; i < n; i++) {  
        struct zip_stat st;  
        zip_stat_init(&st);  
        zip_stat_index(archive, i, 0, &st);  

        printf("File %lld: %s (size: %llu bytes)\n",  
               (long long)i+1, st.name, (unsigned long long)st.size);  

        zip_file_t *zf = zip_fopen_index(archive, i, 0);  
        if (!zf) continue;  

        char *buf = malloc(st.size + 1);  
        zip_fread(zf, buf, st.size);  
        buf[st.size] = '\0';  
        printf("Contents:\n%s\n", buf);  

        free(buf);  
        zip_fclose(zf);  
    }  

    zip_close(archive);  
    return 0;  
}
