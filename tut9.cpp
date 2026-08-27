#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"tell me yor age :"<<endl;
    cin>>age;


    //selection control structure in C++ (if else if else ladder)
    /*if ((age < 18) && (age > 0)){
        cout<<"you cannot come to my party"<<endl;
    }
    else if (age == 18){
        cout<<"you are a kid and you will get a kid pass to the party"<<endl;
    }
    else if (age < 1){
        cout<<"you are not yet born"<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;
    }
    return 0;
} */


//selection control structure in C++ (switch case)
switch (age){
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 2:
        cout<<"you are 2"<<endl;
        break;
    default:
        cout<<"no special cases"<<endl;
}
    cout<<"done with switch case"<<endl;
    return 0;
}