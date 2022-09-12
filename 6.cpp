#include<iostream>
using namespace std;
int swap(int &a ,int &b);
int main()
{
    int x,y;
    cout<<"enter two numbers:";
    cin>>x>>y;
    swap(x,y);
    cout<<"after swapping numbers are:"<<x<<" and "<<y;
    return 0;
}
int swap(int &a,int &b){
    int temp;
    temp=b;
    b=a;
    a=temp;

}
