#include<iostream>
using namespace std;
int sum(int x, int y){
    return x+y;
}
float sum(float x, float y){
    return x+y;
}
int main()
{
    int x,y;
    cout<<"enter two integer numbers:";
    cin>>x>>y;
    cout <<"The Sum of two is: "<<sum(x,y)<<endl;
    float a,b;
    cout<<"enter two float numbers:";
    cin>>a>>b;
    cout <<"The Sum of two is: "<<sum(a,b)<<endl;
    return 0;
}