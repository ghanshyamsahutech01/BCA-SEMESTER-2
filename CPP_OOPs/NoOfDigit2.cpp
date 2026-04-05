#include <iostream>
//#include <conio.h>
using namespace std; //No use in Turbo
class NoOfDigit
{
    public:
    int n, m, i;
    void getData();
    void showNoOfDigit();
};
void NoOfDigit::getData(){
    cout << "Enter any number: ";
    cin >> n;
}
void NoOfDigit::showNoOfDigit(){
    i=1;
    m=10;
    while(m<=n){
        m=m*10;
        i++;
    }
    cout << "No of Digit is: " << i << endl;
}
int main(){ //Use void main in Turbo
    //clrscr();
    NoOfDigit n1;
    n1.getData();
    n1.showNoOfDigit();
    //getch();
    return 0;
}
