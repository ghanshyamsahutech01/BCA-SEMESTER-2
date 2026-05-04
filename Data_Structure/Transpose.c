#include<stdio.h>
//#include<conio.h>
int main(){
    int m,n;
    int i, j;
    int a[10][10];
    //clrscr();
    printf("Enter row and column for Matrix = ");
    scanf("%d%d",&m,&n);
    printf("\nEntery for Matrix:\n");
    for(i=0;i<m;i++){
        printf("Enter %d row = ",i+1);
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nOriginal Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    //getch();
    return 0;
}
