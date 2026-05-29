#include<stdio.h>
//#include<conio.h>
int binary(int arr[],int n,int key)
{
    int low = 0;
    int high = n-1;
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
    int arr[5], index, key, n=5;
    //clrscr();
    printf("Array:\n");
    for(int i=0;i<n;i++){
        printf("Enter value at arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter key to search = ");
    scanf("%d",&key);
    index = binary(arr,n,key);
    if(index == -1){
        printf("Element not found");
    }
    else{
        printf("Element found at index %d",index);
    }
    //getch();
    return 0;
}
