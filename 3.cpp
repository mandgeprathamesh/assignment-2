#include<iostream>
using namespace std;
int power(int x, int y) {
   int i,power=1;
   if(y == 0)
   return 1;
   for(i=1;i<=y;i++)
   power=power*x;
   return power;
}
int main() {
   int x,y;
   cout<<"enter x and y:";
   cin>>x>>y;
   cout<<"x^y = "<<power(x,y);
   return 0;
}