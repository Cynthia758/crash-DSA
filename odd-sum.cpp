#include<iostream>
using namespace std;
int main() {
    int sum = 0, i, number;
    cout << "Enter the maximum limit value : ";
    cin >> number;

    cout << "Odd numbers between 0 and " << number << " are ";

    // Loop from 1 to the given limit
    for (int i=1; i<=number; i++) {
        // Check if the current number is odd or not
        if(i%2 !=0) {
            cout << i << " ";
            sum = sum + i;
        }
    }

    cout << "\nThe Sum Of Odd Numbers from 1 to " << number << " = " << sum;
    return 0;
}