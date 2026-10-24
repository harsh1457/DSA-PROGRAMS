// stack using array 
#include <stdio.h>
#define n 5 
int S[n + 1]; 
int top = 0;  
void Stack_full() {
    printf("Stack is full\n");
}
void Stack_empty() {
    printf("Stack is empty\n");
}
void Push(int item, int S[]) {
    if (top >= n) {
        Stack_full();
        return;
    }
    top = top + 1;
    S[top] = item;
    printf("%d pushed onto stack\n", item);
}
int Pop(int S[]) {
    if (top <= 0) {
        Stack_empty();
        return -1;
    }
    int item = S[top];
    top = top - 1;
    return item;
}
void Stack_display(int S[]) {
    if (top <= 0) {
        Stack_empty();
        return;
    }
    int counter = top;
    while (counter > 0) {
        printf("%d\n", S[counter]);
        counter = counter - 1;
    }
}
int main() {
    int item;
    int ch;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter a choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter Value: ");
                scanf("%d", &item);
                Push(item, S);
                break;
            case 2:
                item = Pop(S);
                if (item != -1) {
                    printf("Popped element: %d\n", item);
                }
                break;
            case 3:
                printf("Stack elements (Top to Bottom):\n");
                Stack_display(S);
                break;
            case 4:
                printf("Exiting....\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

// Queue using Array
#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1 ;
int back = -1 ;
void enqueue(int value) {
    if (back == MAX - 1) {
        printf("Queue is Full!\n");
    } else {
        if (front == -1) front = 0;
        queue[++back] = value;
        printf("%d inserted\n", value);
    }
}
void dequeue(){
    if(front == -1 || front > back)
        printf("Queue is Empty\n");
    else{
    printf("Deleted: %d", queue[front++]);
    }
}

void display(){
    if(front == -1 || front > back)
        printf("Queue is Empty\n");
    else{    
    for (int i = front; i <= back; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n"); }
}
int main(){
    int value;
    int ch;
    while (1) {
        printf("\n1. Enqueue\n2. Display\n3. Dequeue\nEnter a choice: ");
        scanf("%d",  &ch);

        switch (ch) {
            case 1:
                printf("Enter Value: ");
                scanf("%d",&value);
                enqueue(value);
                break;
            case 2:
                display();
                break;
            case 3:
                dequeue();
                break;
            case 4 :
                printf("Exiting....");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
