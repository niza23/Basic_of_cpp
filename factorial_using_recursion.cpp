#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

int ifact(int n)
{
    int f=1;
    int i;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
    int r;
    r=fact(5);
    cout<<"factorial of 5 is "<<r<<endl;
    int s;
    s=ifact(6);
    cout<<"factorial using loop "<<s;
    return 0;
}