#include <iostream>
//#include <conio.h>
using namespace std; //No use in Turbo
class Factorial
{
    public:
    int num, i;
    long long fact=1;
    void getdata();
    void showFactorial();
};
void Factorial::getdata(){
    cout << "Enter any number: ";
    cin >> num;
}
void Factorial::showFactorial(){
    for(i=num;i>0;i--){
        fact*=i;
    }    
    cout << "Factorial of " << num << "! is: " << fact << endl;
}
int main(){ //Use void main in Turbo
    //clrscr();
    Factorial f1;
    f1.getdata();
    f1.showFactorial();
    //getch();
    return 0;
}
    
