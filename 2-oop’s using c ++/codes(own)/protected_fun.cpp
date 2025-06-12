#include <iostream>
using namespace std;
class human
{
  public:
    string name;
    int age;
    int sal;
    public:
    void setname(string name)
    {
      this->name=name;
    }
    void setage(int age)
    {
      this->age=age;
    }
    void setsal(int sal)
    {
      this->sal=sal;
    }
};
//single inheritance 
class male : private human //we can erite private or protected
{
  public:
    int height;
  void longe()
  {
    cout<<"Male is sleeping"<<endl;
  }
   string getname()
   {
        return this->name;
   }
   int getage()
   {
        return this->age;
   }
   int getsal()
   {
        return this->sal;
   }
};
int main()
{
    //last child class in female
    male obj1;
  cout<<"-----------------menu----------------------"<<endl;
  cout<<"Name= "<<obj1.getname() <<endl;
    cout<<"age= "<<obj1.getage() <<endl;
    cout<<"sallary= "<<obj1.getsal()<<endl;

    return 0;
}
