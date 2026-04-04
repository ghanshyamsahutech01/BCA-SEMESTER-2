#include<iostream>
using namespace std;
//Program for Multiple Inheritance
class Father
{
    public:
    void height(){
        cout << "Height from Father" << endl;
    }
};    

class Mother
{
    public:
    void skinColor(){
        cout << "Fair Skin from Mother" << endl;
    }
};

class child: public Father, public Mother
{
    public:
    void independent(){
        cout << "i am a Child" << endl;
    }
};

int main(){
    child c1;
    c1.independent(); //self function
    c1.height(); //from Father
    c1.skinColor(); //from Mother
    return 0;
}