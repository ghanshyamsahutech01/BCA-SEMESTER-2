#include<stdio.h>
//#include<conio.h>
int linear(int arr[],int key,int n)
{
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    int arr[5], index, key, n=5;
    //clrscr();
    printf("Linear array:\n");
    for(int i=0;i<5;i++){
        printf("Enter value at arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter key to search = ");
    scanf("%d",&key);
    index = linear(arr,key,n);
    if(index == -1){
        printf("Element not found");
    }
    else{
        printf("Element found at index %d",index);
    }
    //getch();
    return 0;
}
