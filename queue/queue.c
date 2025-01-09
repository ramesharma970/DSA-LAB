#include<stdio.h>
#include<conio.h>

#define max_size 10
int front= 0;
int rear = -1;
int queue[max_size];

void enqueue(){
    if(rear ==  max_size-1){
        printf("Queue is full.");
    }
    else if(front == -1 && rear == -1){
        int element;
        printf("Enter the element");
        scanf("%d",&element);
        rear = 0;
        front = 0;
        queue[rear] = element;
        }
        else{
            int element;
            printf("Enter the element");
            scanf("%d",&element);
            rear = rear + 1;
            queue[rear] = element;
            }
    }
    
void dequeue(){
    if(rear == -1){
        printf("queue is emmpty");
        }
        
    else if(front == rear){
        rear = -1;
        front = -1;
        } else {
            front = front + 1;
            }
    
}


void display(){
    int i;
    if(rear == -1){
        printf("Queue is empty");
        }
    else{
        for(i=front;i<=rear;i++){
        printf("%d\n ",queue[i]);
        }
    }
}


int main(){
    int choice;
    do{
    printf(" 1.Enqueue 2.Dequeue 3.Display 4.exit \n ");
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            break;  
            }
        } while(choice != 4);
    getch();
    return 0;
    }
