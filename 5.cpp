#include<iostream>
using namespace std;
int fibo(int);
int main()
{
    int x,flag=0;
    cout<<"enter the number to find :";
    cin>>x;
    for(int i=1; ;i++){
        int result=fibo(i);
        if(result==x){
           flag=1;
           break;
        }
        if(result>x){
            break;
        }
    }
    cout<<endl;
    if (flag==1){
        cout<<"number is in fibonacci series";
    }
    else{
        cout<<"number is not there";  
    }
    return 0;
}
int fibo(int x){
    int t1=1;
    int t2=1;
    if(x<=2){
        return 1;
    }
    for(int i=3;i<=x;i++){
        int temp=t1+t2;
        t1=t2;
        t2=temp;
    }
    return t2;
    
}