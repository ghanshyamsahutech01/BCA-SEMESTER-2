#include<stdio.h>
//#include<conio.h>
int main(){
    int a[3][2], b[2][3], i, j, k, sum=0;
    //clrscr();
    printf("Entery for Matrix A (3*2)\n");
    for(i=0;i<3;i++){
	    printf("Enter %d row: ",i+1);
	    for(int j=0;j<2;j++){
	        scanf("%d",&a[i][j]);
	    }
    }
    printf("\nEntery for Matrix B (2*3)\n");
    for(i=0;i<2;i++){
	    printf("Enter %d row: ",i+1);
	    for(int j=0;j<3;j++){
	        scanf("%d",&b[i][j]);
	    }
    }
    printf("\nMultiplication of A*B:\n");
    for(i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	        for(int k=0;k<2;k++){
		        sum=sum+a[i][k]*b[k][j];
	    	}
	    	printf("%d ",sum);
	    	sum = 0;
	    }
	    printf("\n");
    }
    //getch();
    return 0;
}


