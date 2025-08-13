#include<iostream>
using namespace std;
int main() {
    int m,n;
    cout << "Enter the value of m(rows) : ";
    cin >> m;
    cout << "Enter the value of n(columns) : ";
    cin >> n;

    for(int i=1; i<=m; i++) {
        for(int j=0; j<n; j++) {
            cout << char('A'+j) << " "; // Converts number to character
        }
        cout << endl;
    }
    return 0;
}