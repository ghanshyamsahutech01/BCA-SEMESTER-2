#include<stdio.h>

int main()
{
    int a[5], i, max, min;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=1;i<5;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }    
    }
    printf("Minimum value is: %d\n",min);
    printf("Maximum value is: %d\n",max);
    return 0;
}