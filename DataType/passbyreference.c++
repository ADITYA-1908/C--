//pass by reference
#include <bits/stdc++.h>
using namespace std;

void passbyvalue(int &n){  //& will get the original value(the addresee value).
    n+=10;
    cout << n << endl;

    n+=10;
    cout << n << endl;

    n+=10;
    cout << n << endl;

}
int main(){
    int n=10;
    passbyvalue(n); 
    cout << n << endl;
    return 0;
}