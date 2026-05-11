#include<stdio.h>
//#include<conio.h>
#define MAX 5
int top = -1;
int stack[MAX];
void push(int value){
    if(top==MAX-1){
    	printf("Stack is Overflow\n");
    }
    else{
    	top++;
    	stack[top]=value;
        printf("%d inserted into stack\n",stack[top]);
    }
}
void pop(){
    if(top==-1){
    	printf("Stack is Underflow\n");
    }
    else{
    	printf("%d delete from stack\n",stack[top]);
    	top--;
    }
}
void display(){
    if(top==-1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Stack elements are:\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
 int main(){
     int choice, value;
     //clrscr();
     printf("  --Stack Menu--\n");
     printf("1. Push\n");
     printf("2. Pop\n");
     printf("3. Display\n");
     printf("4. Exit\n");
     do{
         printf("Enter your Choice = ");
         scanf("%d",&choice);
         switch(choice){
             case 1: printf("Enter value to push = ");
                     scanf("%d",&value);
                     push(value);
                     printf("\n");
                     break;
             case 2: pop();
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
