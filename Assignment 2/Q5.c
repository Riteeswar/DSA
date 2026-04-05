#include <stdio.h>

int main() {
    int q[5], front = -1, rear = -1;
    int choice, x, i;

    while(1) {
        printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
        scanf("%d", &choice);

        if(choice == 1){
            printf("Enter value: ");
            scanf("%d", &x);

            if((rear + 1) % 5 == front){
                printf("Queue Full\n");
            }
            else{
                if(front == -1){
                    front = 0;
                }
                rear = (rear + 1) % 5;
                q[rear] = x;
            }
        }

        else if(choice == 2){
            if(front == -1){
                printf("Queue Empty\n");
            }
            else{
                printf("Removed: %d\n", q[front]);
                if(front == rear){
                    front = rear = -1;
                }
                else{
                    front = (front + 1) % 5;
                }
            }
        }

        else if(choice == 3){
            if(front == -1){
                printf("Queue Empty\n");
            }
            else{
                printf("Front: %d\n", q[front]);
            }
        }

        else if(choice == 4){
            if(front == -1){
                printf("Queue Empty\n");
            }
            else{
                i = front;
                while(1){
                    printf("%d ", q[i]);
                    if(i == rear){
                        break;
                    }
                    i = (i + 1) % 5;
                }
            }
        }
        else{
            break;
        }
    }
    return 0;
}