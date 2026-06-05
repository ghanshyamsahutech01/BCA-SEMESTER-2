#include<iostream>
//#include<conio.h>
using namespace std;
class B;
class A
{
    int n1;
    public:
    void getData(int a)
    {
        n1 = a;
    }
    friend void addBoth(A, B);
};

class B
{
    int n2;
    public:
    void getData(int b)
    {
        n2 = b;
    }
    friend void addBoth(A, B);
};

void addBoth(A a, B b)
{
    int sum = a.n1 + b.n2;
    cout << "The sum is = " << sum << endl;
}

int main()
{
    //clrscr();
    A a1;
    B b1;
    a1.getData(10);
    b1.getData(20);
    addBoth(a1, b1);
    //getch();
    return 0;
}