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
  hero adi; 
  cout<<"address of adii "<<&adi<<endl;
  //dynamic 
  hero *a=new hero();
  cout<<"adi_subham"<<endl; 
  return 0;
}