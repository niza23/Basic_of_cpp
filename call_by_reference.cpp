#include<iostream>
using namespace std;
int add(int &a,int &b) //different names for x and y and does not consume extra memory
 { 

    int c= a+ b;
    return c;
}
//the add function may become inline function(depends on compiler)
int main()
{
    int x,y,z;
    x=10;
    y=100;
    z=add(x,y); 
    cout<<z;

    return 0;
}
