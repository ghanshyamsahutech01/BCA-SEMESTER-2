#include<stdio.h>
//#include<conio.h>
int main(){
    //clrscr();
    int a[10][10], b[10][10];
    int m, n, p, q;
    int i ,j, k, choice;
    printf("Enter row and column for Matrix A = ");
    scanf("%d%d",&m,&n);
    printf("Enter row and column for Matrix B = ");
    scanf("%d%d",&p,&q);
    printf("\nEntery for Matrix A:\n");
    for(i=0;i<m;i++){
        printf("Enter %d row = ",i+1);
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }   
    printf("\nEntery for Matrix B:\n");
    for(i=0;i<p;i++){
        printf("Enter %d row = ",i+1);
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    } 
    printf("\n   ---Menu---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multipication\n");
    printf("Enter your Choice = ");
    scanf("%d",&choice);
    switch(choice){
        case 1: 
            if(m!=p || n!=q){
                printf("Please enter same size of Matrix A and B");
                break;
            }
            else{
                printf("\nAddition of A and B:\n");
                for(i=0;i<m;i++){
                    for(j=0;j<n;j++){
                        printf("%d ",a[i][j]+b[i][j]);
                    }
                    printf("\n");
                }
            }
            break;
        case 2: 
            if(m!=p || n!=q){
                printf("Please enter same size of Matrix A and B");
                break;
            }
            else{
                printf("\nSubtraction of A and B:\n");
                for(i=0;i<m;i++){
                    for(j=0;j<n;j++){
                        printf("%d ",a[i][j]-b[i][j]);
                    }
                    printf("\n");
                }
            }
            break;
        case 3:
            if(n!=p){
                printf("Error: Column of Matrix A must match Row of Matrix B");
                break;
            }
            else{
                printf("\nMultiplication of A and B:\n");
                for(i=0;i<m;i++){
                    for(j=0;j<q;j++){
                        int sum=0;
                        for(k=0;k<n;k++){
                            sum=sum+a[i][k]*b[k][j];
                        }
                        printf("%d ",sum);
                    }
                    printf("\n");        
                }
            }
            break;   
        default: printf("Error: Invalid Choice");   
    }
    //getch();
    return 0;
}    