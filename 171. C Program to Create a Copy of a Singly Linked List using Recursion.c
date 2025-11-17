// C Program to Create a Copy of a Singly Linked List using Recursion

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Recursive function to copy list
struct Node* copyList(struct Node* head) {
    if(head == NULL)
        return NULL;
    struct Node* newNode = createNode(head->data);
    newNode->next = copyList(head->next);
    return newNode;
}

// Function to print list
void printList(struct Node* head) {
    while(head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Creating original list: 1->2->3->NULL
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    printf("Original list: ");
    printList(head);

    struct Node* copied = copyList(head);
    printf("Copied list: ");
    printList(copied);

    return 0;
}
