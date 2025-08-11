#include<iostream>
using namespace std;
int main() {
    char c;
    cout << "Enetr character : ";
    cin >> c;
   if (c>='a' && c<='z') {
    cout << "Lower Case";
   }
   else {
    cout << "Upper Case";
   }
   // 2nd way..
   if(c>=65 && c<=90) { // Implicit Conversion : The conversion is done by the compiler.
    cout << "\nUpper case";
   }
   else {
    cout << "\nLower Case";
   }
    return 0;
}