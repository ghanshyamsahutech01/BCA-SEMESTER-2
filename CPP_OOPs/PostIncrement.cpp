#include<iostream>
//#include<conio.h>
using namespace std; //No use in turbo
class Increment
{
     public:
     int n;
     void getData(){
         cout << "Enter any numbers: ";
         cin >> n;
     }
     void showPostIncrement(){
         cout << "Value during Post-increment(n++): " << n++ << endl;
         cout << "Value after Post-increment(n): " << n << endl;
     }    
};     
int main() //use void main in turbo
{
    //clrscr();
    Increment p1;
    p1.getData();
    p1.showPostIncrement();
    //getch();
    return 0;
}