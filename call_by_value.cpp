#include<iostream>
using namespace std;
int add(int a,int b) {
    a++;  //but the value of x remains same in main function
    int c=a+b;
    return c;
}

int main()
{
    int x,y,z;
    x=10;
    y=100;
    z=add(x,y); 
    cout<<z;

    return 0;
}