#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int n,rem,sum=0;
    cout<<"enter a number";
    cin>> n;
    while (n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    cout<<"reverse is "<<sum;
    
    
    

    return 0;
}
