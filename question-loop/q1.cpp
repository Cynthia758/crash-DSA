// printing sum from 1 to n
#include<iostream>
using namespace std;
int main() {
    int n;
    int total_sum = 0;
    cout << "Enter a Positive integer : ";
    cin >> n;
    int sum = (n*(n+1))/2;
    cout << sum << endl;
    // We can also do it by using for loop
    for(int i=0; i<=n; i++) {
        total_sum = total_sum+i;
    }
    cout << total_sum << endl;
    
    return 0;
}