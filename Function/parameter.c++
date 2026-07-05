#include <bits/stdc++.h>
using namespace std;

 void printDetails(string name, int age){
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
 
}

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    printDetails(name,age);

    string name1;
    cout << "Enter your name: ";
    cin >> name1;
    int age1;
    cout << "Enter your age: ";
    cin >> age1;
    printDetails(name1,age1);

    return 0;
}