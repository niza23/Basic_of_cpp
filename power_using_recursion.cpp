#include<iostream>
using namespace std;
int pow(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}
int pow2(int m,int n) //reduced power function
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0){
        return pow2(m*m,n/2);}
    else{
        return m*pow2(m*m,(n-1)/2);
    }
    
}


int main() 
{
    int m=2, n=5, r, s;
    r=pow(m,n);
    cout<<"power is "<<r<<endl;
    s=pow(m,n);
    cout<<" by reducing power fun "<<s;
}