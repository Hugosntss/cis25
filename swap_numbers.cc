#include <iostream>
using namespace std;
int main (){

    int num1 = 2;
    int num2 = 1;
    int swap;   // variable swap created to recall one of the original variables

    swap = num1; // variable swap calls the variable num1 to turn in a new variable, setting the number 2 as a value
    num1 = num2; // the num1 now has the value of the num2, which is going to send a 1 instead of 2
    num2 = swap; // the num2 is now calling the swap variable which is 2, so that the variable will spill 2 as a value

    cout << "Hello\n"<<num1<< " "<< num2;


}