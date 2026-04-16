#include<iostream>
using namespace std;

template <class T>
T add(T a,T b)                  //function template 
{
    cout<<"template over"<<endl;
    return a+b;
}
int add(int a,int b)           //function overloading
{
    cout <<"normal over"<<endl;
    return a+b;
}

int main()
{
    cout<<add(4,86)<<endl;
    cout<<add(5.01,87.0)<<endl;
    return 0;
}