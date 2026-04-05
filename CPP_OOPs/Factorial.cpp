#include <iostream>
//#include <conio.h>
using namespace std; //No use in Turbo
class Factorial
{
    public:
    int num, i;
    long long fact;
    void getData();
    void showFactorial();
};
void Factorial::getData(){
    cout << "Enter any number: ";
    cin >> num;
}
void Factorial::showFactorial(){
    fact=1;
    for(i=num;i>0;i--){
        fact*=i;
    }    
    cout << "Factorial of " << num << "! is: " << fact << endl;
}
int main(){ //Use void main in Turbo
    //clrscr();
    Factorial f1;
    f1.getData();
    f1.showFactorial();
    //getch();
    return 0;
}
    
