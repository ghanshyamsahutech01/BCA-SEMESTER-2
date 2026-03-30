#include<iostream>
//#include<conio.h>
using namespace std; //No use in turbo
class EvenNumber
{
     public:
     int i;
     void showEvenNumber();
};
void EvenNumber::showEvenNumber(){
    i=2;
    while(i<=100){
        cout << i << endl;
        i+=2;
    }
}    
int main() //use void main in turbo
{
    //clrscr();
    EvenNumber n1;
    n1.showEvenNumber();
    //getch();
    return 0;
}