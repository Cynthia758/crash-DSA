#include<iostream>
using namespace std;
int main() {
    int age;
    age = 25;
    age = 28;
    float PI = 3.14f; // f tells compiler that it should be consider as a float datatype and not as double because by default it will take it as double even after declaring it.
    char grade = 'A';
    cout << PI << endl;
    cout << sizeof(grade) << endl; 
    cout << "age" << endl;
    cout << age << endl;
    cout << sizeof(age) << endl; // Will give the size in bytes that requires to store int.
    cout << "Hey!Vaidehi." << endl << "Future FAANG intern.";
    return 0;
}    