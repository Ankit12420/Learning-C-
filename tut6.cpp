#include <iostream>

using namespace std;

int main(){
    int a=4 , b=5;
    cout << "operators in C++" << endl;
    cout << "1.arithmetic operators" << endl;
    cout<<"the value of a + b is "<< a+b << endl;
    cout<<"the value of a - b is "<< a-b << endl;
    cout<<"the value of a * b is "<< a*b << endl;
    cout<<"the value of a / b is "<< a/b << endl;
    cout<<"the value of a % b is "<< a%b << endl;


    /*cout << "2.assignment operators" << endl;
    int  c=3, e=9;
    char d='d';
    return 0;*/


    cout << "3.comparison operators" << endl;
    cout<<"the value of a==b is "<< (a==b) << endl;
    cout<<"the value of a!=b is "<< (a!=b) << endl;
    cout<<"the value of a>=b is "<< (a>=b) << endl;
    cout<<"the value of a<=b is "<< (a<=b) << endl;
    cout<<"the value of a>b is "<< (a>b) << endl;
    cout<<"the value of a<b is "<< (a<b) << endl;

    cout << "4.logical operators" << endl;
    cout<<"the value of logical and operator ((a==b) && (a<b)) is "<< ((a==b) && (a<b)) << endl;
    cout<<"the value of logical or operator ((a==b) || (a<b)) is "<< ((a==b) || (a<b)) << endl; 
    cout<<"the value of logical not operator (!(a==b)) is "<< (!(a==b)) << endl;
    return 0;

}