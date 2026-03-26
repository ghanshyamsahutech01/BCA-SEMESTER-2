#include <iostream>
using namespace std;
class Percent
{
public:
    float sub1,sub2,sub3,sub4,total,percent;
    void getdata(){

        cout << "Enter marks of English: ";
        cin >> sub1;
        cout << "Enter marks of Hindi: ";
        cin >> sub2;
        cout << "Enter marks of Maths: ";
        cin >> sub3;
        cout << "Enter marks of Chemistry: ";
        cin >> sub4;
    }
    void showPercent(){
        total = sub1 + sub2 + sub3 + sub4;
        percent = (total/400)*100;
        cout << "Your Percent is: " << percent << "%" << endl;
    }
};

int main()
{
    Percent p1;
    p1.getdata();
    p1.showPercent();
    return 0;
}
