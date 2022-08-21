#include<iostream>
using namespace std;

int fun1(int n)
{
    if(n>0)
    {  
        return fun1(n-1)+n; //it will have multiple copies
    }
    return 0;
}

int fun2(int n)
{
    static int x=0; //static variable will have only one copy
    if(n>0)
    {   x++;
        return fun2(n-1)+x;   
    }
    return 0;
}

int y=0;  //global variable
int fun3(int n)
{
    if(n>0)
    {
        y++;
        return fun3(n-1)+y;
        
    }
    return 0;
}

int main()
{
    int r,s,t;
    s=fun1(5);
    r=fun2(5);
    t=fun3(5);
    cout<<s<<" "<<endl;
    cout<<r<<" "<<endl;
    cout<<t;
    return 0;
}
