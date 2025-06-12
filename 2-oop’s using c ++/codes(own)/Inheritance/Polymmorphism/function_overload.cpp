#include <iostream>
using namespace std;
class A
{
    public:
    void adi()
    {
        cout<<"hieee"<<endl;
    }
    int adi(int n)
    {
        cout<<n<<endl;
    }
    void adi(char c)
    {
        cout<<c<<endl;
    }
     int  adi(int b, char d)
    {
        cout<< b <<" "<< d <<endl;
    }
};

int main()
{
    A obj;
     obj.adi();
     obj.adi(66);
      obj.adi('a');
       obj.adi(4,'a');
    return 0;
}