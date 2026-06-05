#include<iostream>
//#include<conio.h>
using namespace std;
class A
{
    public:
    virtual void show(){
        cout << "Class A" << endl;
    }
};
class B: public A
{
    public:
    void show(){
        cout << "Class B" << endl;
    }
};
int main()
{
    //clrscr();
    A *ptr;
    B b1;
    ptr = &b1;
    ptr->show();
    //getch();
    return 0;
}
