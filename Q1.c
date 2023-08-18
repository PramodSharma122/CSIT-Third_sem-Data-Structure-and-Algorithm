// Q1. To Become Familiar with stack opertation (PUSH,POP,Traverse etc)

#include<stdio.h>
#include<stdlib.h>

int stack[5];
void push(int);
int pop();
void traverse();
int is_empty();
int top_element();
int top=0;

int main() {
    int element,choice;
    
        printf("Stack opertations.\n");
        printf("1. Insert into stack (PUSH operation).\n");
        printf("2. Delete from stack (POP operation).\n");
        printf("3. Print top element of stack.\n");
        printf("4. Check if stack is empty.\n");
        printf("5. Traverse stack.\n");
        printf("6. Exit.\n");
    for (;;) {
        printf("Enter your choice.\n");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
            if (top==5)
                printf("Error: Overflow\n\n");
            else {
                printf("Enter the value to insert.\n");
                scanf("%d",&element);
                push(element);
            }
            break;

            case 2:
            if(top==0)
                printf("Error: Underflow.\n\n");
            else {
                element=pop();
                printf("Element removed from stack is %d.\n",element);
            }
            break;

            case 3:
            if(!is_empty()) {
                element=top_element();
                printf("Element at the top of stack is %d\n\n",element);
            }
            else
                printf("Stack is empty.\n\n");
                break;

            case 4:
            if(is_empty())
                printf("Stack is empty.\n\n");
            else
                printf("Stack is not empty.\n\n");
                break;

            case 5:
                traverse();
                break;
            case 6:
                exit(0);        
        }
    }
}

void push(int value) {
    stack[top]=value;
    top++;
}

int pop() {
    top--;
    return stack[top];
}

void traverse() {
    int d;
    if(top==0) {
        printf("Stack is empty.\n\n");
        return;
    }
    printf("There are %d element in stack.\n",top);
    for(d=top-1;d>=0;d--)
    printf("%d\n",stack[d]);
    printf("\n");
}
int is_empty() {
    if(top==0)
    return 1;
    else
    return 0;
}
int top_element() {
    return stack[top-1];
}