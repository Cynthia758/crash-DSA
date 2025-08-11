#include<iostream>
using namespace std;
int main() {
    // Print numbers 1 to 5.
    int count = 1,n;
    cout << "Enter a number : ";
    cin >> n;
    while (count<=n) {
        cout << count << endl;
        count ++;
    }

    return 0;
}