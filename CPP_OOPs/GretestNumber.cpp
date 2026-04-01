#include<iostream>
//#include<conio.h>
using namespace std;
class Gretest
{
     public:
     int a,b,c;
     void getdata(){
         cout << "Enter three numbers: ";
         cin >> a >> b >> c;
     }
     void showGretest(){
         if(a>=b){
             if(a>=c){
                 cout << a << " is a Gretest number." << endl;
             }
             else{
                 cout << c << " is a Gretest number." << endl;
             }
         }
         else{
             if(b>=c){
                 cout << b << " is a Gretest number." << endl;
             }
             else{
                 cout << c << " is a Gretest number." << endl;
             }
         }        
     }
};     
int main()
{
    //clrscr();
    Gretest g1;
    g1.getdata();
    g1.showGretest();
    //getch();
    return 0;
}