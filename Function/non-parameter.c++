#include <bits/stdc++.h>
using namespace std;

int  sumOfNumbers(int n1, int n2){
    int sum = n1+n2;
    return sum;
 
}

void subOfNumbers(int n1, int n2){
    int sub= n1-n2;
    cout << "Sub of " << n1 << " and " << n2 << " is: " << sub << endl;
 
}

int main() {
    int n1,n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    int n3 = sumOfNumbers(n1,n2);
    cout << "Sum of " << n1 << " and " << n2 << " is: " << n3 << endl;

     subOfNumbers(n1,n2);
    return 0;
}