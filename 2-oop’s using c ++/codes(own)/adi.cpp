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
class male : public human
{
  public:
    int height;
  void longe()
  {
    cout<<"Male is sleeping"<<endl;
  }
};
//multiple inheritance 
class female : public human
{
  public:
  string colour;
  void sleep()
  {
    cout<<"Male has long height"<<endl;
  }
};
int main()
{
    //last child class in female
    human obj1;
    obj1.setname("aditya");
    obj1.setage(19);
    obj1.setsal(6);
    cout<<"-----------------menu----------------------"<<endl;
    cout<<"Name= "<<obj1.name <<endl;
    cout<<"age= "<<obj1.age <<endl;
    cout<<"sallary= "<<obj1.sal<<endl;
    male obj2;
    obj2.longe();
    female obj3;
    obj3.sleep();
    return 0;
}
