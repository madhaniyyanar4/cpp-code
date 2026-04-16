#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,string> w;
    w[1]="kiruba";
    w[2]="vasu";
    w[4]="ezhil";
    cout<< w[1]<<endl;
    cout<<w[2]<<endl; 
    cout<<w[4]<<endl;
    
    return 0;

}