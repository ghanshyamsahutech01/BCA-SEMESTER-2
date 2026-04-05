#include <iostream>
//#include <conio.h>
using namespace std; //Not required in turbo
class Abc
{
public:
    int a,b;
    void getData(){
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }
    void showSubtract(){
        cout << "Subtraction of " << a << " and " << b << " is: " << a-b << endl;
    }
};

int main() //use void main() in turbo
{
    //clrscr();
    Abc a1;
    a1.getData();
    a1.showSubtract();
    //getch();
    return 0;
}
