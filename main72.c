#include<stdio.h>
#include<stdlib.h>
#include "stack72.h"
#include "stack72.c"

int main() {
    struct Node* root = NULL;
    int choice, value;
    while(1) {
        printf("\n\nMENU\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1: 
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                push(&root, value);
                break;
            case 2: 
                value = pop(&root);
                if(value != -1)
                    printf("Popped value : %d", value);
                else
                    printf("Stack is Empty");
                break;
            case 3: 
                value = peek(root);
                if(value != -1)
                    printf("Top element : %d", value);
                else
                    printf("Stack is Empty");
                break;
            case 4: 
                exit(0);
            default: 
                printf("\nInvalid Please try again\n");
        }
    }
}