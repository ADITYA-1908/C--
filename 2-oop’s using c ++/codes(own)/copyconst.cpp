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
      cout<<"default constructor called "<<endl;
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

    //cpoy constructor 
    hero(hero& temp)
    {
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    //print function
    void print()
    {
        cout<<level<<endl;
        cout<<health<<endl;

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
    hero adi(20,'A');
    adi.print();

    //copy constructor 
    hero subham(adi);
    subham.print(); 
  return 0;
}