#include<iostream>
using namespace std;
//Program for Multi-level Inheritance
class Animal
{
    public:
    void eat(){
        cout << "Eating" << endl;
    }
    void sleep(){
        cout << "Sleeping" << endl;
    }
};

class dog: public Animal
{
    public:
    void bark(){
        cout << "Barking" << endl;
    }
};

class puppy: public dog
{
    public:
    void weep(){
        cout << "Weeping" << endl;
    }
};

int main(){
    puppy p1;
    p1.eat(); //from Animal (Grandfather)
    p1.sleep(); //from Animal (Grandfather)
    p1.bark(); //from dog (Father)
    p1.weep(); //self function
    return 0;
}
