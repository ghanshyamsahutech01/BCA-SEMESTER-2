#include<stdio.h>
//#include<conio.h>
#define MAX 3
int front = -1;
int rear = -1;
int queue[MAX];
void enqueue(int value){
    if((rear+1)%MAX==front){
	    printf("Queue is full\n");
    }
    else{
	    if(front==-1) front = 0;
	    rear = (rear+1)%MAX;
	    queue[rear]=value;
	    printf("%d is inserted in Queue\n",queue[rear]);
    }
}

void dequeue(){
    if(front == -1){
       printf("Queue is Underflow\n");
    }
    else{
	    printf("%d is deleted from Queue\n",queue[front]);
	    if(front==rear){
	        front=-1;
	        rear=-1;
	    }
	    else{
	        front = (front+1)%MAX;
	    }
    }
}

void display(){
    if(front == -1){
	    printf("Queue is Empty\n");
    }
    else{
	    printf("Queue elements are:\n");
        int i=front;
	    while(i!=rear){
	        printf("%d ",queue[i]);
            i=(i+1)%MAX;
	    }
        printf("%d\n",queue[rear]);
    }
}
void main(){
    int value;
    int choice;
    //clrscr();
    printf("  --Menu--\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    do{
	    printf("Enter your choise = ");
    	scanf("%d",&choice);
    	switch(choice){
	        case 1: printf("Enter value = ");
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
	        default: printf("Invalide choice!\n\n");
	    }
    } while(choice!=4);
    //getch();
}