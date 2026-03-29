#include<iostream>
//#include<conio.h>
using namespace std; //No use in turbo
class Increment
{
     public:
     int n;
     void getdata(){
         cout << "Enter any numbers: ";
         cin >> n;
     }
     void showPreIncrement(){
         cout << "Pre-increment(++n) number: " << ++n << endl;
     }    
};     
int main() //use void main in turbo
{
    //clrscr();
    Increment p1;
    p1.getdata();
    p1.showPreIncrement();
    //getch();
    return 0;
}