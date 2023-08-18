// Q6. To familiar with doubly linked list operations ( push operation, pop operation, and traversal operation).

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next, *prev;
} *front, *rear;

void dpush() {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d", &temp->data);
    temp->next = front;
    temp->prev = NULL;
    if (front != NULL) {
        front->prev = temp;
    }
    front = temp;
    if (rear == NULL) {
        rear = front;
    }
}

void dpop() {
    int x;
    struct node *temp;
    if (front == NULL) {
        printf("\nList Empty!!");
        return;
    }
    x = front->data;
    temp = front;
    front = front->next;
    if (front != NULL) {
        front->prev = NULL;
    } else {
        rear = NULL;
    }
    free(temp);
    printf("\n%d is the deleted item.", x);
}

void dinject() {
    int x;
    struct node *temp;
    printf("\nEnter data: ");
    scanf("%d", &x);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    if (front == NULL) {
        temp->prev = NULL;
        front = rear = temp;
    } else {
        temp->prev = rear;
        rear->next = temp;
        rear = temp;
    }
}

void deject() {
    int x;
    struct node *temp;
    if (front == NULL) {
        printf("\nList Empty!!");
        return;
    }
    x = front->data;
    temp = front;
    front = front->next;
    if (front != NULL) {
        front->prev = NULL;
    } else {
        rear = NULL;
    }
    free(temp);
    printf("\n%d is the deleted item.", x);
}

void display() {
    struct node *temp;
    temp = front;
    if (front == NULL) {
        printf("\nList empty..");
        return;
    } else {
        printf("\nList elements:\n");
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    int ch;
    front = rear = NULL;

    while (1) {
        printf("\n\t1. Push\n\t2. Pop\n\t3. Inject\n\t4. Deject\n\t5. Display\n\t6. Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                dpush();
                break;
            case 2:
                dpop();
                break;
            case 3:
                dinject();
                break;
            case 4:
                deject();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(1);
                break;
            default:
                printf("Invalid choice..\n");
        }
    }
}
