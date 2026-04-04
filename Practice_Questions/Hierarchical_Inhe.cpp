#include<iostream>
using namespace std;
//Program for Hierarchical Inheritance
class Animal
{
    public:
    void eat(){
        cout << "Eating" << endl;
    }
};    

class dog: public Animal
{
    public:
    void bark(){
        cout << "Barking" << endl;
    }
};

class cat: public Animal
{
    public:
    void meow(){
        cout << "Meowing" << endl;
    }
};

int main(){
    dog d1;
    cat c1;
    d1.eat(); //from Animal
    d1.bark(); //self function
    c1.eat(); //from Animal
    c1.meow(); //self function
    return 0;
}