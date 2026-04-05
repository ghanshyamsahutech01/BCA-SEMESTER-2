#include <iostream>
//#include <conio.h>
using namespace std; //No use in Turbo
class PrimeOrNot
{
    int num, isPrime;
    public:
    void getData();
    void showPrimeOrNot();
};
void PrimeOrNot::getData(){
    cout << "Enter any number: ";
    cin >> num;
}
void PrimeOrNot::showPrimeOrNot(){
    if(num<=0){
        cout << "Please enter a positive number!" << endl;
    }
    else{
        if(num==1){
            cout << "1 is neither Prime nor Composite." << endl;
        }
        else{
            isPrime=1;
            for(int i=2;i<=num/2;i++){
                if(num%i==0){
                    isPrime=0;
                    break;
                }
            }
            if(isPrime)
                cout << num << " is a Prime number." << endl;
            else
                cout << num << " is a Composite number." << endl;
        }        
    }                 
}
int main(){ //Use void main in Turbo
    //clrscr();
    PrimeOrNot p1;
    p1.getData();
    p1.showPrimeOrNot();
    //getch();
    return 0;
}    