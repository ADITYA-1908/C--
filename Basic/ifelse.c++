// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     if (age >= 18) {
//         cout << "You are eligible to vote!";
//     }
//     else{
//         cout << "You are not eligible to vote!";
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int main() {
    int marks;
    cout << "Enter your marks: ";  
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade: A";
    }
    else if( marks>=80) {
        cout << "Grade: B";
    }
    else if(marks>=70) {
        cout << "Grade: C";
    }
    else if( marks>=60) {
        cout << "Grade: D";
    }
    else if(marks>=50) {
        cout << "Grade: E";
    }
    else{
        cout << "Grade: F";
    }
    return 0;
}
