#include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    int glo = 9;
    glo = 78;
    //int a = 4;
    //int b = 5; 
    //cout << "this is tutorial 4. Here the value of a is "<<a<<" and the value of b is "<<b<<"\n";
    //cout << "the value of a+b is "<<a+b;
    bool is_true = true;
    sum();
    cout<<glo<< is_true;
    return 0; 
}