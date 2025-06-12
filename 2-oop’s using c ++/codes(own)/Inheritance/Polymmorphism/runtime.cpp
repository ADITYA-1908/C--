#include <iostream>
using namespace std;
class A
{
    public:
    void name()
    {
        cout<<"adi_subham"<<endl;
    }
};
class B : public A
{
    public:
    void name()
    {
        cout<<"adiii"<<endl;
    }
};
int main()
{
    B op;
    op.name();
   // A n;
    //n.name();
    return 0;
}