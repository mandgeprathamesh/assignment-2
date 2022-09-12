#include<iostream>
using namespace std;
int area(int,int);
float area(float);
float area(float,float);
int main(){
        int length,b;
        float radius,base,ht;
        cout<<"enter length and breadth the rectangle:";
        cin>>length>>b;
        cout<<"enter the radius of the circle:";
        cin>>radius;
        cout<<"enter the base  and height of  the triangle:";
        cin>>base>>ht;
        cout<<"\nArea of rectangle  = "<<area(length,b);
        cout<<"\nArea of circle =  "<<area(radius);
        cout<<"\nArea of triangle =  "<<area(base,ht);
        return 0;
    }
int area(int length,int b){
    return(length*b);
    }
float area(float radius){
    return(3.14*radius*radius);
    }
float area(float base,float ht){
   return((base*ht)/2);
    }