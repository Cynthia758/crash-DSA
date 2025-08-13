#include<iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the value of m : ";
    cin >> m;
    for(int i=0; i<m; i++) {
        // Spaces
        for(int j=0; j<i; j++) {
            cout << " ";
        }
        // nums
        for(int j=0; j<m-i; j++) {
            cout << (i+1);
        }
        cout << endl;
    }
    return 0;
}