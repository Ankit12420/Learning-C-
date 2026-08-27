#include<iostream>
using namespace std;

typedef struct employee
{
    int eid;
    char favchar;
    float salary;

} ep;

int main() {
    struct employee harry;
    harry.eid = 1;
    harry.favchar = 'c';
    harry.salary = 120979;
    cout << "the value of "<<harry.eid<<endl;
    cout << "the value of "<<harry.favchar<<endl;
    cout << "the value of "<<harry.salary<<endl;

union money
{
    int rice;
    char car;
    float pounds;
};
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car;

    enum meal{breakfast, lunch, dinner};
    meal c1 = breakfast;
    cout<<c1;
    cout<<(c1==0);

    return 0;

}