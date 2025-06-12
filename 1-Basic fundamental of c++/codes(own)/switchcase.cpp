#include <iostream>
#include <string>
using namespace std;
int main() 
{
  int a=5;
  int b=3;
  int n;
  cin>>n;
  switch(n)
  {
    case 1:
      cout<<(a+b);
      break;
      case 2:
      cout<<(a-b);
      break;
      case 3:
      cout<<(a*b);
      break;
      case 4:
      cout<<(a/b);
       break;
      default:
      cout<<"end ";
  }
  return 0;
}
