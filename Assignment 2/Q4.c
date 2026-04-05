#include <stdio.h>

int main() {
    int queue[100], front = -1, rear = -1;
    int choice, x, i;

    while(1) {
        printf("\n1.Add\n2.Print\n3.Display\n4.Exit\n");
        scanf("%d", &choice);

        if(choice == 1){
            printf("Enter document number: ");
            scanf("%d", &x);

            if(rear == 99){
                printf("Queue Full\n");
            }
            else{
                if(front == -1){
                    front = 0;
                }
                rear++;
                queue[rear] = x;
            }
        }
        else if(choice == 2){
            if(front == -1 || front > rear){
                printf("No documents\n");
            }
            else{
                printf("Printed: %d\n", queue[front]);
                front++;
            }
        }
        else if(choice == 3){
            if(front == -1 || front > rear){
                printf("Queue Empty\n");
            }
            else{
                for(i = front; i <= rear; i++){
                    printf("%d ", queue[i]);
                }
            }
        }
        else{
            break;
        }
    }
    return 0;
}