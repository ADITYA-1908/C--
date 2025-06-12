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

class male : public human
{
  public:
  string colour;
  void sleep()
  {
    cout<<"Male is sleeping"<<endl;
  }
}; 
int main()
{
  male obj1;
  obj1.setname("aditya");
  obj1.setage(19);
  obj1.setsal(6);
  cout<<"------------------menu----------------------"<<endl;
  cout<<"Name= "<<obj1.name <<endl;
  cout<<"age= "<<obj1.age <<endl;
  cout<<"sallary= "<<obj1.sal<<endl;
  obj1.sleep();
  return 0;
}
