#include<iostream>
using namespace std;
int main() {
    int sum=0;
    int number,i=1;
    cout << "Enter the higher limit : ";
    cin >> number;
    while(i<=number) {
        if(i%2!=0) {
            sum = sum + i;
        }
        i++;
    }
    cout << "The sum of the odd numbers within the given limit is : " << sum << endl;
    return 0;
}