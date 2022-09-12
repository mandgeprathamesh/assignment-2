#include<iostream>
using namespace std;
int max(int,int);
float max(float,float);
int main()
{
    int a,b;
    cout<<"enter two integer numbers:";
    cin>>a>>b;
    cout<<"greatest is:"<<max(a,b)<<endl;
    float x,y;
    cout<<"enter two float numbers:";
    cin>>x>>y;
    cout<<"greatest is:"<<max(x,y);
    return 0;
}
int max ( int a, int b)
{
if (a>=b)
return a;
else 
return b;
}
float max ( float a, float b)
{
if (a>=b)
return a;
else 
return b;
}