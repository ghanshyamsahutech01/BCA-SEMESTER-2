#include<iostream>
//#include<conio.h>
using namespace std;
class Number
{
    int n;
    public:
    void getData(int x){
        n = x;
    }
    void operator ++ (){
        ++n;
    }
    void display(){
        cout << "Value of n = " << n << endl;
    }
};    
int main()
{
    //clrscr();
    Number n1;
    n1.getData(10);
    ++n1;
    n1.display();
    //getch();
    return 0;
}
