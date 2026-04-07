#include<stdio.h>
#include<stdlib.h>
int main()
{
    int y=8,x=22;
    char key='1',aim='@';
    while(key!='q'){
        system("clear"); //Use cls instead clear for windows VS Code
        printf("          -----Aiming Program-----\n");
        printf("   Press a,s,d,w for Move and q for Quiet\n");
        printf("------------------------------------------\n\n");
        for(int i=0;i<y;i++){
            printf("\n");
        }
        for(int i=0;i<x;i++){
            printf(" ");
        }
        printf("%c",aim);    
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
        if(y<0) y=0;
        
    }
    return 0;
}
