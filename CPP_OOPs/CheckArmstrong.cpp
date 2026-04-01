#include <iostream>
//#include <conio.h>
using namespace std; //No use in Turbo
class Armstrong
{
    public:
    int n, i, temp, sum=0;
    void getdata();
    void showArmstrong();
};
void Armstrong::getdata(){
    cout << "Enter any number: ";
    cin >> n;
}
void Armstrong::showArmstrong(){
    temp=n;
    for(i=0;temp>0;i++){
        temp/=10;
    }
    temp=n;
    while(temp>0){
        int a=temp%10;
        int pow=1;
        for(int j=0;j<i;j++){
            pow=pow*a;
        }    
        sum+=pow;
        temp/=10;
    }
    if(sum==n){
<<<<<<< HEAD
        cout << n << " is a Armstrong." << endl;
    }
    else{
        cout << n << " is not a Armstrong." << endl;
=======
    cout << "This number is Armstrong." << endl;
    }
    else{
    cout << "This number is not Armstrong." << endl;
>>>>>>> 4d8f5864337628e23472f424513b00769e3e96a9
    }
}
int main(){ //Use void main in Turbo
    //clrscr();
    Armstrong a1;
    a1.getdata();
    a1.showArmstrong();
    //getch();
    return 0;
<<<<<<< HEAD
}    
=======
}    
>>>>>>> 4d8f5864337628e23472f424513b00769e3e96a9
