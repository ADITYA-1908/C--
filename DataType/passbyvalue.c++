//pass by value
#include <bits/stdc++.h>
using namespace std;

void passbyvalue(int n){
    n+=10;
    cout << n << endl;

    n+=10;
    cout << n << endl;

    n+=10;
    cout << n << endl;

}
int main(){
    int n=10;
    passbyvalue(n); // took the original and send the copy by using function
    cout << n << endl;
    return 0;
}