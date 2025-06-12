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
          
        this->health=health; 
    }
    hero(int health,char level)
    {
        this->level=level;
        //this->health=health;
    }
    //print function 
    void print()
    {
        cout<<level<<endl;
        //cout<<health<<endl;
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

  cout<<"------start--------"<<endl;
  //static
  hero adi(90); 
 // cout<<"address of adii "<<&adi<<endl;
  adi.print();
  //dynamic 
  hero *a=new hero(84);
 //cout<<"adi_subham"<<endl;
  a->print(); 

  hero temp(22,'s');
  temp.print();
  return 0;
}