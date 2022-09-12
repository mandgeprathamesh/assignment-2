#include<iostream>
using namespace std;
int addition(int,int=0,int=0);
int main()
{
    int x,y,z;
    cout<<"enter two numbers:";
    cin>>x>>y;
    addition(x,y);
    cout<<endl<<"enter three numbers:";
    cin>>x>>y>>z;
    addition(x,y,z);
    return 0;
}
int addition(int x ,int y,int z){
    cout<<"addition is:"<<x+y+z;
}