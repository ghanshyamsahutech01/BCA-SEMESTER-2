#include <iostream>
//#include <conio.h>
using namespace std;
class Abc
{
public:
    int a,b;
    void getdata(){
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }
    void showAdd(){
        cout << "Addition of " << a << " and " << b << " is: " << a+b << endl;
    }
};

int main()
{
    //clrscr();
    Abc a1;
    a1.getdata();
    a1.showAdd();
    //getch();
    return 0;
}
