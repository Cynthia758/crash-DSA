// Pyramid pattern
#include<iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the value of m : ";
    cin >> m;
    for(int i=0; i<m; i++) {
        // Spaces : m-i-1;
        for(int j=0; j<m-i-1; j++) {
            cout << " ";
        }
        // nums1 : i+1
        for(int j=1; j<=i+1; j++) {
            cout << j;
        }
        // nums2
        for(int j=i; j>0; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}