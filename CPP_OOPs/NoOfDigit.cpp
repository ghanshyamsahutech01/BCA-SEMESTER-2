#include <iostream>
//#include <conio.h>
using namespace std; //No use in Turbo
class NoOfDigit
{
    public:
    int n, i;
    void getdata();
    void showNoOfDigit();
};
void NoOfDigit::getdata(){
    cout << "Enter any number: ";
    cin >> n;
}
void NoOfDigit::showNoOfDigit(){
    i=0;
    while(n>0){
        n=n/10;
        i++;
    }
    cout << "No of Digit is: " << i << endl;
}
int main(){ //Use void main in Turbo
    //clrscr();
    NoOfDigit n1;
    n1.getdata();
    n1.showNoOfDigit();
    //getch();
    return 0;
}
