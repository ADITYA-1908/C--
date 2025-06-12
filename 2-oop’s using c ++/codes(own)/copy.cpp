#include <iostream>
using namespace std;
class hero
{
  private:
  int health ; 
  //constructor
  public:
  char *name;
  char level;
    hero()
    { 
      cout<<"default constructor called "<<endl;
      //name size is 100
      name=new char[100];
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
    // hero(hero& temp)
    // {
    //     cout<<"copy constructor called"<<endl;
    //     this->health=temp.health;
    //     this->level=temp.level;
    //}

    //print function
    void print()
    {
        cout<<name<<endl;
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
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
}; 

int main()
{
    hero adi;
    adi.sethealth(12);
     adi.setlevel('A');
    char name[10]="aditya";
     adi.setName(name);
     adi.print();

    //
    // hero adi2(adi);
    // adi2.print();
  return 0;
}