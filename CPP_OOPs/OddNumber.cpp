#include<iostream>
//#include<conio.h>
using namespace std; //No use in turbo
class OddNumber
{
     public:
     int i;
     void showOddNumber();
};
void OddNumber::showOddNumber(){
    i=1;
    while(i<=100){
        cout << i << endl;
        i+=2;
    }
}    
int main() //use void main in turbo
{
    //clrscr();
    OddNumber n1;
    n1.showOddNumber();
    //getch();
    return 0;
}
