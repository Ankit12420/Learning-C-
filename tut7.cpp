#include<iostream>

using namespace std;

int c=45;

int main(){

    // ***************Build in data types in C++***************
    /* int a,b,c;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    c= a + b;
    cout<<"the value of c is:"<<c<<endl;
    cout<<"the value of global c is:"<<::c<<endl; */



// ***************float, double and long double literals in C++***************

    /*float d = 34.4F;
    long double e = 34.4L;
     
    //cout<<"the value of d is:"<<d<<endl<<"the value of e is:"<<e<<endl;
    cout<<"the size of 34.4 is:"<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4F is:"<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4L is:"<<sizeof(34.4L)<<endl;*/





// ***************Reference variables in C++***************

    //float x = 455;
    //float & y = x;
    //cout<<"the value of x is:"<<x<<endl;
    //cout<<"the value of y is:"<<y<<endl;




    


// ***************Typecasting in C++***************
    int a = 45;
    float b = 45.46;

    cout << "the value of a is:" << (float)a << endl;
    cout << "the value of b is:" << float (a) << endl;
    cout << "the value of c is:" << (int)b << endl;
    cout << "the value of c is:" << int (b) << endl;

    int c = int(b);
    cout << "the expression is:" << a + b << endl;
    cout << "the expression is:" << a + int(b) << endl;
    cout << "the expression is:" << a + (int)b << endl;

    return 0;
}