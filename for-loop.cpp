#include<iostream>
using namespace std;
int main() {
    // for(initialisation; condition; updation)
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i=1; i<=n; i++) {
        cout << i << " ";
    }
    return 0;
}