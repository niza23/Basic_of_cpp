#include<iostream>
using namespace std;
int fib(int n)  //using loop
{
    int x=0,y=1,f;
    if (n<=1)  return n;
    for(int i=2;i<=n;i++)
    {
        f=x+y;
        x=y;
        y=f;
    }
    
    return f;
}
int fib2(int n)  //using recursion
{
    if(n<=1) return n;
    return fib2(n-2)+fib(n-1);

    return n;
}


int F[10]; //global array for memoization
int fib3(int n)  //using memoization
{
    if(n<=1)  
        {   F[n]=n;
            return n;
        }
    else{
        if (F[n-2]==-1)
        
            F[n-2]=fib3(n-2);
        
        if (F[n-1]==-1)
        
            F[n-1]=fib3(n-1);
        
        return F[n-2]+F[n-1];
        
    } 
    
}
int main()
{
    cout<<fib(10)<<endl;
    cout<<fib2(22)<<endl;

    int i;
    for(i=0;i<10;i++)
    {
        F[i]=-1;
    }
    cout<<fib3(10);
    return 0;
}