#include<iostream>
using namespace std;
int main() {
    // Arithmatic Operators
    int a,b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    cout << "The Summation of two numbers is : " << (a+b) << endl;
    cout << "The Subtraction of two numbers is : " << (a-b) << endl;
    cout << "The Multiplication of two numbers is : " << (a*b) << endl;
    cout << "The Division of two numbers is : " << (a/b) << endl;
    cout << "The Modulous of two numbers is : " << (a%b) << endl;

    cout << (5/(double)2) << endl;

    // Relational Operators

    cout << (3<5) << endl;

    cout << !(3<5) << endl;   // logical operators : NOT; and we are aware of the logical OR & AND.




    return 0;
}