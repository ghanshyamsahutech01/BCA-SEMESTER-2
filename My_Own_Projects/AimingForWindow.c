#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*Hello my name is Ghanshayam Sahu. This is Aiming file which idea from
 my friend Chirag Deora and i am just develop it with implementation and
 this file perfect working only windows. Ok Alvida! */
int main()
{
    int y=8,x=22;
    char key='1',aim='@';
    system("color 0A");
    while(key!='q'){
        system("cls"); //Use cls instead clear for windows VS Code
        printf("                   -----Aiming Program-----\n");
        printf("   Press a,s,d,w for Move, Press c for center and q for Quiet\n");
        printf("---------------------------------------------------------------\n\n");
        for(int i=0;i<y;i++){
            printf("\n");
        }
        for(int i=0;i<x;i++){
            printf(" ");
        }
        printf("%c",aim);    
        key=_getch();

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
    system("color 07");
    return 0;
}
