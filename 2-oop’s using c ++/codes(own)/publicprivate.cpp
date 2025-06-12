#include <iostream>
using namespace std;
class hero
{
  public:
  int level;
  char blood;
  private:
  int op=9;
  //cout<< op <<endl;
};
int main()
{
  hero adi;
  adi.level=90;
  adi.blood='b';
  cout<<"level of adii= "<<adi.level<<endl;
  cout<<"blood of adii= "<<adi.blood<<endl;
  return 0;
}