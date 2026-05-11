#include<stdio.h>
//#include<conio.h>
#define MAX 5
int front = -1;
int rear = -1;
int queue[MAX];
void enqueue(int value){
    if(rear == MAX - 1){
    	printf("Queue is full\n");
    }
    else{
    	if(front == -1) front = 0;
    	rear++;
    	queue[rear] = value;
    	printf("%d inserted into index %d\n",queue[rear],rear);
    }
}

void dequeue(){
    if(front == -1 || front > rear){
        printf("Queue is Underflow\n");
    }
    else{
    	printf("%d deleted from index %d\n",queue[front],front);
    	front++;
    }
}

void display(){
    if(front == -1 || front > rear){
        printf("Queue is Empty\n");
    }
    else{
        printf("Queue elements are:\n");
        for(int i = front; i <= rear; i++){
            printf("%d\n",queue[i]);
        }
    }
}

int main(){
     int choice, value;
     //clrscr();
     printf("  --Queue Menu--\n");
     printf("1. Enqueue\n");
     printf("2. Dequeue\n");
     printf("3. Display\n");
     printf("4. Exit\n");
     do{
         printf("Enter your Choice = ");
         scanf("%d",&choice);
         switch(choice){
             case 1: printf("Enter value to insert = ");
                     scanf("%d",&value);
                     enqueue(value);
                     printf("\n");
                     break;
             case 2: dequeue();
                     printf("\n");
                     break;
             case 3: display();
                     printf("\n");
                     break;
             case 4: printf("Program Ended\n");
                     break;
             default: printf("Invalid Choice\n\n");
         }
     } while(choice!=4);
     //getch();
     return 0;
}
