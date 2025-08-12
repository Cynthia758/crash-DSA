#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;

    if(number <= 1) {
        cout << "Non-Prime" << endl;
        return 0;
    }
    if(number==2) {
        cout << "Prime" << endl;
        return 0;
    }

    for(int i=2; i<=number-1; i++) {
        if(number%i==0) {
            cout << "Non-Prime" << endl;
            break;
        }
        else {
            cout << "Prime" << endl;
            break;
        }
    }
    return 0; 
}
  