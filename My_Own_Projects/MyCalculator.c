#include <stdio.h>
//#include <stdlib.h> //Use for clear terminal
int main() {
    float a, b;
    int flag=1;
    char op;
    printf("||===============================||\n");
    printf("||  ---My Digital Calculator---  ||\n");
    printf("||===============================||\n");
    printf("||Help:Enter number with Operator||\n||or any other key to exit.      ||\n");
    printf("||-------------------------------||\n");
    printf("||like (A+B): ");
    scanf("%f %c %f",&a,&op,&b);
    while(flag){
        switch(op){
            case '+': a=a+b;
            break;
            case '-': a=a-b;
            break;
            case '*': a=a*b;
            break;
            case '/': 
                if(b!=0)
                    a=a/b; 
                else printf("Error: Division by zero\n");
                break;
            default: flag = 0;
        }
        if(flag){
            //system("clear"); //Use, If I want clear terminal
            printf("||-------------------------------||\n");
            printf("||Enter for Next (like Result+5).||\n");
            printf("||Result: %.2f", a);
            scanf(" %c %f", &op, &b);
        }
    }
    printf("\n||  Final Result: %.2f\n",a);
    printf("||  Thanks for using! Goodbye.   ||\n");
    return 0;
}
