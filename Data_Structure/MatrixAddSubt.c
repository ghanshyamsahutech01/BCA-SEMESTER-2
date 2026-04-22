#include<stdio.h>
//#include<conio.h>
int main(){
    int a[3][2], b[3][2], i, j;
    //clrscr();
    printf("Entery for Matrix A (3*2):\n");
    for(i=0;i<3;i++){
        printf("Enter %d row = ",i+1);
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }    
    printf("\nEntery for Matrix B (3*2):\n");
    for(i=0;i<3;i++){
        printf("Enter %d row = ",i+1);
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nAddition of A+B:\n");      
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    printf("\nSubtraction of A-B:\n");      
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    //getch();
    return 0;
}        