#include<iostream>
//#include<conio.h>
using namespace std;

class Counter
{
    static int count;
public:
    Counter(){
        count++;
    }
    void display(){
        cout << "Count is = " << count << endl;
    }
};

int Counter::count = 0;

int main(){
    //clrscr();
    Counter c1;
    Counter c2;
    Counter c3;
    c3.display();
    //getch();
    return 0;
}    