#include<iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the value of m : ";
    cin >> m;
    for(int i=0; i<m; i++) {
        for(int j=0; j<=i; j++) {
            cout << char('A'+i) << " ";
        }
        cout << endl;
    }
    return 0;
}