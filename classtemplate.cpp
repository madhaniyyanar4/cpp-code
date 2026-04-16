#include<iostream>
using namespace std;
template <class T>
class A
{
    public:
    T a,b;
    void getdata(T x,T y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
 int main() 
 {
    A<int>obj1;
    obj1.getdata(5,6);
    obj1.display();

    A<float>obj2;
    obj2.getdata(54.4,43.5);
    obj2.display();
    
    return 0;
 }

 