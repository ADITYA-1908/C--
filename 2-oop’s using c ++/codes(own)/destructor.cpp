#include <iostream>
using namespace std;
class hero
{
  private:
  int health ; 
  //constructor
  public:
  char level;
    hero()
    {
      
      cout<<"constructor called"<<endl;
    }

    //paramerterised constructor
    
    hero(int health)
    {
        cout<<"this--->"<<this <<endl;   
        this->health=health;
    }
    hero(int health,char level)
    {
        this->level=level;
        this->health=health;
    }

    //--------------------------
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
};

int main()
{
    //static 
  hero a;

  //dynamic
  hero *a=new hero; 
  return 0;
}