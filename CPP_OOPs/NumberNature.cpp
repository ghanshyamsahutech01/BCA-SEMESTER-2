#include<iostream>
//#include<conio.h>
using namespace std; //No use in turbo
class CheckNumber
{
     public:
     int n;
     void getData(){
         cout << "Enter any numbers: ";
         cin >> n;
     }
     void showNumberNature(){
         if(n>0){
             cout << n << " is Positiv number." << endl;
         }
         else{
             if(n<0){
                 cout << n << " is Negative number." << endl;
             }
             else{
                 cout << n << " is Zero." << endl;
             }
         }            
     }        
};     
int main() //use void main in turbo
{
    //clrscr();
    CheckNumber c1;
    c1.getData();
    c1.showNumberNature();
    //getch();
    return 0;
}