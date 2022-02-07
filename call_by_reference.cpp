#include<iostream>
using namespace std;
int add(int &a,int &b) //this will create another name of x and y 
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