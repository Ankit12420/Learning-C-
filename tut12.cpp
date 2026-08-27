#include<iostream>
using namespace std;

int main() {
    //pointers in c++

    int a = 3;
    int * b ;
    b = &a;

    // & ----> address of operator

    cout<<"the adress of a is : "<< &a<<endl;
    cout<<"the value of a is : "<< b<<endl;
    
    // * ----> dereference operator

    cout <<"the value at adress b is "<<*b<<endl;

    // pointer to pointer
    int ** c = &b;
    cout << "the adress of b is : "<<&b<<endl;
    cout << "the adress of b is : "<<c<<endl;
    cout << "the value at adress c is : "<<*c<<endl;
    cout << "the value at adress value_at(value_at(c)) is : "<<**c<<endl;


    return 0;
}