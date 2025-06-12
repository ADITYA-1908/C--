#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int a,c,b;
    cout<<"a= ";
    cin>> a;
    cout<<"b= ";
    cin>> b;
    cout<<"c= ";
    cin>> c;
    if (a>b && a>c)
    {
        cout<<"a is largest";
    }
    else if (b>a && b>c)
    {
        cout<<"b is largest";
    }
    else
    cout<< "c is gratest";
    
    

    return 0;
}
