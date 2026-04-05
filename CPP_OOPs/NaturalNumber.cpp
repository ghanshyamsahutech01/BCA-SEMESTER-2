#include<iostream>
//#include<conio.h>
using namespace std; //No use in turbo
class NaturalNumber
{
     public:
     int i, n;
     void getData();
     void showNaturalNumber();
};
void NaturalNumber::getData(){
    cout << "Enter any number: ";
    cin >> n;
}
void NaturalNumber::showNaturalNumber(){
    for(i=0; i<=n; i++){
        cout << i << endl;
    }
}    
int main() //use void main in turbo
{
    //clrscr();
    NaturalNumber n1;
    n1.getData();
    n1.showNaturalNumber();
    //getch();
    return 0;
}