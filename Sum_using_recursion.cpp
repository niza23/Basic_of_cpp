#include<iostream>
using namespace std;
int sum(int n)  //recursion
{
    if(n==0)
    {
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}
int sum2(int n)  //using loop
{
    int i=0;
    for(int j=1;j<=n;j++)
        i=i+j;
    return i;

      
}
int main()
{
    int r;
    r=sum(5);
    cout<<r<<endl;
    int p;
    p=sum2(5);
    cout<<"sum using loop "<<p;

    return 0;
}