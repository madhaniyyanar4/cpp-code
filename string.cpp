#include <iostream>
#include <string>
using namespace std;
int main()
{
    string std;
    cout <<"enter your name:";
    getline(cin,std);
    cout<<"veriables are:"<<std.length()<<endl;

    cout<<"character are:"<<endl;
    for (int i=0;i<std.length();i++)
    {
        cout<<std[i]<<endl;
    }
return 0;
}