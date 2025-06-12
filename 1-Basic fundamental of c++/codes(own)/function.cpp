#include <iostream>
#include <string>
using namespace std;
int op (int n)
  {
    int i;
    for ( i = 1; i <10; i++)
    {
      /* code */
      cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
    }
    
  }
int main() 
{
  
  int n;
  cout<<"enter the number";
  cin>>n;
op(n);
    return 0;
}
