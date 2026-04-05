#include<iostream>
//#include<conio.h>
using namespace std;
class Square
{
     public:
     int n;
     void getData(){
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
    s1.getData();
    s1.showSquare();
    //getch();
    return 0;
}