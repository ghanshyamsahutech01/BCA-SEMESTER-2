#include <iostream>
//#include <conio.h>
using namespace std; //No use in Turbo
class Palindrome
{
    public:
    char name[25];
    int i, j, hl, flag;
    void getdata();
    void showPalindrome();
};
void Palindrome::getdata(){
    cout << "Enter any name: ";
    cin >> name;
}
void Palindrome::showPalindrome(){
    for(i=0;name[i]!='\0';i++){}
    hl=i/2;
    for(j=0;j<hl;j++){
        if(name[j]!=name[i-1-j]){
            flag=0;
            break;
        }    
    }
    if(flag){
    cout << "Name is Palindrome." << endl;
    }
    else{
    cout << "Name is not Palindrome." << endl;
    }
}
int main(){ //Use void main in Turbo
    //clrscr();
    Palindrome p1;
    p1.getdata();
    p1.showPalindrome();
    //getch();
    return 0;
}
