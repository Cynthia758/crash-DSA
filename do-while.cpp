// Even if the condition written is wrong the loop has to be executed atlest 1 time in Do-While loop...
// major diff : while-loop : check first and then execute it ; Do-While-loop : Execute it first and then check if the condition is corre t or not.
// For Example
#include<iostream>
using namespace std;
int main() {
    while(3>5) {
        cout << "Hello Future FAANG intern." << endl;
    } // As the condition is wrong the loop is going to execute it for 0 times so nothing will be printed.


    do {
        cout << "Heyy!Future FAANG Intern." << endl;
    }
    while(3>5); // No matter that the condition is false but the loop is going to print the line one time.
    return 0;
}