#include<iostream>
using namespace std;
int fact(int x){
    if(x<=0){
        return 1;}
        int fact=1;
    for(int i=0;i<=x;i++){
            fact*=i;
    }return fact;
}
int comb(int n,int r){
    int com=fact(n)/(fact(r)*fact(n-r));
    return com;
}
int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<comb(i,j);
        }
        cout<<endl;
    }
}