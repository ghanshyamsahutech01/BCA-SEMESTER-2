#include<iostream>
//#include<conio.h>
using namespace std;
class Number
{
    int a, b;
    public:
    void getData(int x, int y){
        a = x;
        b = y;
    }
    void operator -- (){
        --a;
        --b;
    }
    void display(){
        cout << "Value of a = " << a << endl;
        cout << "Value of b = " << b << endl;
    }
};    
int main()
{
    //clrscr();
    Number n1;
    n1.getData(8,6);
    --n1;
    n1.display();
    //getch();
    return 0;
}
