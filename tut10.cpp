#include <iostream>

using namespace std;
int main(){
    /*Loops in C++:
    there are three types of loops in C++
    1. for loop
    2. while loop
    3. do-while loop*/

    // for loop in c++/
    //int i = 1 ;
    //cout<< i;
    //i++;

    //syntax of for loop in c++:

    //for(initialization; condition; updation)
    
    //for (int i = 0; i < 40; i++){
    //    cout<< i << endl;
    //}



    /* example of while loop */
    //syntax:
    //while(condition):

    //printing 1 - 40 using while loop
    // int i = 0;
    // while(i <= 40){
    //     cout << i << endl;
    //     i+=10;
    // }
    // return 0;

    //example of infinite loop in c++ using while loop
    // int i = 1;
    // while (true){
    //     cout<<i<<endl;
    //     i++;



    /*do while loop in c++*/
    // int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i <= 40);

    //printing the tabl of 6
    int i = 6;
    while (i <= 61){
        cout<< i << endl;
        i+=6;
    }

    return 0;
}