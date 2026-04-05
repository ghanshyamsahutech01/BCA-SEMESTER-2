#include<iostream>
//#include<conio.h>
using namespace std; //No use in turbo
class EvenOrOdd
{
     public:
     int n;
     void getData(){
         cout << "Enter any numbers: ";
         cin >> n;
     }
     void showEvenOrOdd(){
         if(n%2==0)
             cout << n << " is Even number." << endl;
         else
             cout << n << " is Odd number." << endl;
     }        
};     
int main() //use void main in turbo
{
    //clrscr();
    EvenOrOdd e1;
    e1.getData();
    e1.showEvenOrOdd();
    //getch();
    return 0;
}