// C Program to Reverse a Stack using Recursion

#include <stdio.h>

#define MAX 100
int stack[MAX], top = -1;

// Push element
void push(int x) { stack[++top] = x; }

// Pop element
int pop() { return stack[top--]; }

// Insert at bottom (recursive helper)
void insertBottom(int x) {
    if (top == -1) {
        push(x);
        return;
    }
    int temp = pop();
    insertBottom(x);
    push(temp);
}

// Reverse stack using recursion
void reverse() {
    if (top == -1) return;
    int temp = pop();
    reverse();
    insertBottom(temp);
}

int main() {
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        push(x);
    }

    reverse();

    printf("Reversed Stack:\n");
    while(top != -1)
        printf("%d ", pop());

    return 0;
}
