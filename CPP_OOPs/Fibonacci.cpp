#include <iostream>
//#include <conio.h>
using namespace std; //No use in Turbo
class Fibonacci
{
    public:
    int num, i, c, a, b;
    void getData();
    void showFibonacci();
};
void Fibonacci::getData(){
    cout << "Enter any positive number: ";
    cin >> num;
}
void Fibonacci::showFibonacci(){
    a=0;
    b=1;
    if(num>0){
        if(num>1){
            cout << "0" << endl << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
        for(i=3;i<=num;i++){
            c=a+b;
            cout << c << endl;
            a=b;
            b=c;
        }
    }
    else{
        cout << "0 is not. Please enter positive number!" << endl;
    }
}
int main(){ //Use void main in Turbo
    //clrscr();
    Fibonacci f1;
    f1.getData();
    f1.showFibonacci();
    //getch();
    return 0;
}
