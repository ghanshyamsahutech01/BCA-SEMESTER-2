#include<iostream>
//#include<conio.h>
using namespace std;
class TriangleArea
{
     public:
     float base,height,area;
     void getdata(){
         cout << "Enter base of triangle: ";
         cin >> base;
         cout << "Enter height of triangle: ";
         cin >> height;
     }
     void showTriangleArea(){
         area = (base*height)/2;
         cout << "Area of Triangle is: " << area << endl;
     }
};     
int main()
{
    //clrscr();
    TriangleArea t1;
    t1.getdata();
    t1.showTriangleArea();
    //getch();
    return 0;
}