#include<iostream>
//#include<conio.h>
using namespace std;
class CircleArea
{
     public:
     float radius,area;
     void getdata(){
         cout << "Enter Radius of Circle: ";
         cin >> radius;
     }
     void showCircleArea(){
         area = radius*radius*3.14;
         cout << "Area of Circle is: " << area << endl;
     }
};     
int main()
{
    //clrscr();
    CircleArea c1;
    c1.getdata();
    c1.showCircleArea();
    //getch();
    return 0;
}