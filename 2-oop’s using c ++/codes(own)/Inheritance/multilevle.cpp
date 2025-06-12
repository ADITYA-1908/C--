#include <iostream>
using namespace std;
class Dog
{ 
    public: 
    void bark() 
    { 
        cout << "barking"<<endl; 
    } 
}; 
class cat : public Dog
{
    public:
    void mewo()
    {
        cout<<"mewo mewo "<<endl;
    }

};
class goat : public cat
{
    public:
    void mahh()
    {
        cout<<"maayhhhhh "<<endl;
    }

};
int main() 
{ 
    goat obj;
    obj.bark();
    obj.mewo();
    obj.mahh(); 
    return 0;
}