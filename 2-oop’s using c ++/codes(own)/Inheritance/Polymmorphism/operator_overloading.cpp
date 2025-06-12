#include <iostream>
using namespace std;
class A
{
    public:
    int a;
    int b;
    public:
    void operator+( A &obj)
    {
        int v1=this->a;
        int v2=obj.a;
        cout<<"output= "<<v2-v1<<endl;
        cout<<"hieeee"<<endl;
    }
};
int main()
{
    A obj1, obj2;
    obj1.a=4;
    obj2.a=7;
    obj1+obj2;
    return 0;
}