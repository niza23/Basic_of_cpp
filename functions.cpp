#include<iostream>
using namespace std;
int add(int a,int b) //formal parameters--temporary parameters 
{
    int c=a+b;
    return c;
}

int main()
{
    int x,y,z;
    x=10;
    y=100;
    z=add(x,y);  //actual paramters
    cout<<z;



    return 0;
}