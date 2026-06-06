#include<stdio.h>
int main()
{
    int y=0,x=0;
    char key='1',aim='@';
    printf("\x1b[2J");
    while(key!='q'){
        printf("\x1b[H");
        printf("          -----Aiming Program-----\n");
        printf("   Press a,s,d,w for Move and q for Quiet\n");
        printf("------------------------------------------\n");
        printf("||≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈||\n");
        for(int i=0;i<y;i++){
            printf("||                                      ||\n");
        }
        printf("||");
        for(int i=0;i<x;i++){
            printf(" ");
        }
        printf("%c",aim); 
        for(int i=0;i<37-x;i++){
            printf(" ");
        }
        printf("||\n");
        for(int i=0;i<22-y;i++){
            printf("||                                      ||\n");
        }
        printf("||≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈||\n");
        key=getchar(); //Use _getch() instead getchar() for windows VS Code
        while(getchar()!='\n'); //No use in windows VS Code
        switch(key){
            case 's': y++; aim='v'; break;
            case 'w': y--; aim='^'; break;
            case 'd': x++; aim='>'; break;
            case 'a': x--; aim='<'; break;
            case 'c': y=8; x=22; aim='@'; break;
        }
        if(x<0) x=0;
        if(x>37) x=37;
        if(y<0) y=0;
        if(y>22) y=22;
    }
    return 0;
}
