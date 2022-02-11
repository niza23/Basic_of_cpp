#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0) return 1;
    return fact(n-1)*n;
}

int ncr(int n,int r)
{
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;

}

int NCR(int n,int r) //using pascal's triangle
{
    if(n==r || r==0)
        return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);

}

int main()
{
    int nr;
    nr=ncr(4,2);
    cout<<nr<<endl;


    int NR;
    NR=NCR(5,2);
    cout<<NR;
}