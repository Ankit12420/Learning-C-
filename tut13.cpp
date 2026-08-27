#include<iostream>
using namespace std;

int main() {
    //array example
    int marks[4] = {23,45,56,89};
    int mathmarks[4];
    mathmarks[0] = 2278;
    mathmarks[1] = 679;
    mathmarks[2] = 897;
    mathmarks[3] = 624;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // marks[2] = 67;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i =0; i <4 ; i++)
    {
        cout<<"the value of marks "<< i << " is " << marks[i]<<endl;
    }

    //pointers and array
    int * p = marks;
    cout<<"the value of marks[0] is "<< *p<<endl;
    cout<<"the value of marks[1] is "<< *(p+1)<<endl;
    return 0;
}
