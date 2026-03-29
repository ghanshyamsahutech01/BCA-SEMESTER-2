#include<iostream>
//#include<conio.h>
using namespace std;
class Square
{
     public:
     int n;
     void getdata(){
         cout << "Enter any number: ";
         cin >> n;
     }
     void showSquare(){
         cout << "Square is: " << n*n << endl;
     }
};     
int main()
{
    //clrscr();
    Square s1;
    s1.getdata();
    s1.showSquare();
    //getch();
    return 0;
}