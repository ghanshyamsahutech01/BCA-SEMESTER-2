#include<stdio.h>
//#include<conio.h>
#define MAX 5
int binary(int arr[],int key)
{
    int low = 0;
    int high = MAX-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key)
            return mid;
        else if(key<arr[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}
int main()
{
    int arr[MAX], index, key;
    //clrscr();
    printf("Array:\n");
    for(int i=0;i<5;i++){
        printf("Enter value at arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter key to search = ");
    scanf("%d",&key);
    index = binary(arr,key);
    if(index == -1){
        printf("Element not found");
    }
    else{
        printf("Element found at index %d",index);
    }
    //getch();        
    return 0;
}