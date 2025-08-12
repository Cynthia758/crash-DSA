#include<iostream>
using namespace std;
int main() {
    int number,i=0;
    cout << "Enter the higher limit : ";
    cin >> number;
    do {
        cout << i << endl;
        i++;
    }
    while(i<=number);
    cout << endl;
    return 0;
}