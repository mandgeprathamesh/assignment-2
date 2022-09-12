#include<iostream>
using namespace std;
int highestvalue(int);
int main()
{
    int x;
    cout<<"enter a number:";
    cin>>x;
    highestvalue(x);

    return 0;
}
int highestvalue(int x){
    int greatest=0;
    while(x>0){
        int y=x%10;
        x=x/10;
        if(y>greatest){
            greatest=y;
        }


    }
    cout<<"greatest number is:"<<greatest;
}
