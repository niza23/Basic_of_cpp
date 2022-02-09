#include<iostream>
using namespace std;
//e^x=1+x/1+x^2/2!+x^3/3!+.......+ n terms
// performs three operation == 1. sum 2.factorial 3.power
float exp(float x, float n)
{
    static float p=1,f=1;
    float r;
    if(n==0)
    {
        return 1;
    }
    else{
        r=exp(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }

}

int main()
{
    int r;
    float x=3,m=10;
    cout<<exp(x,m);
    

    return 0;
}
