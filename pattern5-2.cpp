#include<iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the value of m : ";
    cin >> m;
    for(int i=0; i<m; i++) {
        for(int j=i+1; j>0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}