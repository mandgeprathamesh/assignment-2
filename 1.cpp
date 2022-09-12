#include<iostream>
using namespace std;
int prime(int);
int main()
{
    int x,result;
    cout<<"enter a number:";
    cin>>x;
    prime(x);
    return 0;
}
int prime(int x){
    int count=0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"prime number";
    }
    else{
        cout<<"not a prime number";
    }
}