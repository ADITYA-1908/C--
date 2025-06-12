#include <iostream>
using namespace std;
class a
{
    public:
    void abc()
    {
        cout<<"hieeee"<<endl;
    }
};

class b
{
    public:
    void abc()
    {
        cout<<"adi_subham"<<endl;
    }
};

class c : public a,public b
{
    public:
    void abc()
    {
        cout<<"how r uhh ?"<<endl;
    }
};

int main()
{
    c obj;
    obj.a :: abc();
    return 0;
}