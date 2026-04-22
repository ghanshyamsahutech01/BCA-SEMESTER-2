#include<stdio.h>
//#include<conio.h>
int main(){
    int a[10], i, sum=0;
    //clrscr();
    printf("Enter 5 numbers = ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("After Adition (+5) = ");    
    for(i=0;i<5;i++){
        printf("%d ",a[i]+5);
    }
    printf("\nAfter Subtraction (-3) = ");    
    for(i=0;i<5;i++){
        printf("%d ",a[i]-3);
    }
    printf("\nAfter Multipication (*5) = ");    
    for(i=0;i<5;i++){
        printf("%d ",a[i]*5);
    }
    printf("\nAfter Division (/2) = ");    
    for(i=0;i<5;i++){
        printf("%d ",a[i]/2);
    }
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("\nSum of numbers = %d",sum);      
    //getch();
    return 0;
}    