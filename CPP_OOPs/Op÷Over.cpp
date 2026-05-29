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
    Number operator / (Number n2){
        Number temp;
        temp.a = a / n2.a;
        temp.b = b / n2.b;
        return temp;
    }
    void display(){
        cout << "Value of a = " << a << endl;
        cout << "Value of b = " << b << endl;
    }
};    
int main()
{
    //clrscr();
    Number n1, n2, n3;
    n1.getData(15,40);
    n2.getData(3,5);
    n3 = n1 / n2;
    n3.display();
    //getch();
    return 0;
}