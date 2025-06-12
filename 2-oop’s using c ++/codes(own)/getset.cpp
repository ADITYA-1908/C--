#include <iostream>
using namespace std;
class hero
{
  private:
  int health=90;
  public:
  char level;
    int gethealth()
    {
        return health;
    }
    char getlevel()
    { 
        return level;
    }
    void setlevel(char bl)
    {
        level=bl;
    }
    void sethealth(int lv)
    {
        health=lv;
    }
  //cout<< op <<endl;
};
int main()
{
    //creation of object using static memory allocation
  hero adi;
  //useget
  cout<<"adi health is="<<adi.gethealth()<<endl;
  //use set
  adi.sethealth(70);
  adi.level='A';
  cout<<"adi health="<<adi.gethealth()<<endl;
  //cout<<"health of adii= "<<adi.health<<endl;
  cout<<"level of adii= "<<adi.level<<endl;

  //creation of object using dynamic memory allocation(DMA)
  hero *ad = new hero;
  ad->setlevel('r');
  ad->setlevel(20);
  cout<<"level of adii= "<<(*ad).level<<endl;
  cout<<"health of adii= "<<(*ad).gethealth()<<endl;
  cout<<"levle is "<<ad->level<<endl;
  cout<<"levle is "<<ad->gethealth()<<endl;

  return 0;
}