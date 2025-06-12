#include <iostream>
using namespace std;
class student
{
    private:
    string name;
    int age;
    int height;
    public:
    //name
    string getname()
    {
        return name;
    }
    void setname(string name)
    {
        this->name=name;
    }
    //age
    int getage()
    {
        return age;
    }
    void setage(int age)
    {
        this->age=age;
    }
    //height
    int getheight()
    {
        return height;
    }
    void setheight(int height)
    {
        this->height=height;
    }
    // 3 argument 
    void setall(string name,int age,int height)
    {
        this->name=name;
        this->height=height;
        this->height=height;
    }
    //print
    //  void print()
    // {
    //     cout<<"Student name:- "<<name<<endl;
    //     cout<<"Student age:- "<<age<<endl;
    //     cout<<"Student height :- "<<height<<endl;
    // }
};

int main()
{
    student adi;
    cout<<"--------student details-----------"<<endl;
    adi.setname("Aditya");
    adi.setage(19);
    adi.setheight(6);
    //print
    cout<<"Student name:- "<<adi.getname()<<endl;
   cout<<"Student age:- "<<adi.getage()<<endl;
    cout<<"Student height :- "<<adi.getheight()<<endl;
    //---------------------
    //adi.print();
  
  return 0;
}