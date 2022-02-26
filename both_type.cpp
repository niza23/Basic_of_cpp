#include<iostream>
using namespace std;
int add(int &a,int *b){ //one is passed by reference and other by address


    int c= a+ *b;
    return c;
}
int main()
{
    int x,y,z;
    x=10;
    y=100;
    z=add(x,&y); 
    cout<<z;

    return 0;
}
