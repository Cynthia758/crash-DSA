// Sum of 1 to a given number.
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a Positive Integer : ";
    cin >> n;
    int sum = 0;
    int i=1;
    while(i<=n) {
        sum = sum+i;
        i++;
    }
    cout << sum ;
    return 0;
}