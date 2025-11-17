// C Program to Add 2 Binary Strings

#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], sum[100];
    int i, j, carry = 0, k = 0;

    printf("Enter first binary string: ");
    scanf("%s", a);
    printf("Enter second binary string: ");
    scanf("%s", b);

    int len1 = strlen(a);
    int len2 = strlen(b);

    i = len1 - 1;
    j = len2 - 1;

    // Add from right to left
    while(i >= 0 || j >= 0 || carry) {
        int bit1 = (i >= 0) ? a[i] - '0' : 0;
        int bit2 = (j >= 0) ? b[j] - '0' : 0;
        int total = bit1 + bit2 + carry;
        sum[k++] = (total % 2) + '0';
        carry = total / 2;
        i--; j--;
    }

    // Reverse sum
    for(int x = 0; x < k/2; x++) {
        char temp = sum[x];
        sum[x] = sum[k-x-1];
        sum[k-x-1] = temp;
    }
    sum[k] = '\0';

    printf("Sum of binary strings: %s\n", sum);

    return 0;
}
