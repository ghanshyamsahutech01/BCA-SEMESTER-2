#include<stdio.h>
//#include<conio.h>
int main(){
    int a[10][10], b[10][10], m, n, p, q;
    //clrscr();
    printf("Enter row and column of first Matrix = ");
    scanf("%d %d",&m,&n);
    printf("Enter row and column of second Matrix = ");
    scanf("%d %d",&p,&q);
    if(n==p){
	printf("Entry for Matrix A:\n");
	for(int i=0;i<m;i++){
	    printf("Enter %d row = ",i+1);
	    for(int j=0;j<n;j++){
		scanf("%d",&a[i][j]);
	    }
	}
	printf("\n");
	printf("Entry for Matrix B:\n");
	for(int i=0;i<p;i++){
	    printf("Enter %d row = ",i+1);
	    for(int j=0;j<q;j++){
		scanf("%d",&b[i][j]);
	    }
	}
	printf("\n");
	printf("Multipication of A*B:\n");
	for(int i=0;i<m;i++){
	    for(int j=0;j<q;j++){
		int sum = 0;
		for(int k=0;k<p;k++){
		    sum = sum + a[i][k] * b[k][j];
		}
		printf("%d ",sum);
	    }
	    printf("\n");
	}
    }
    else{
	printf("Error! Please enter value n=p");
    }
    //getch();
    return 0;
}
