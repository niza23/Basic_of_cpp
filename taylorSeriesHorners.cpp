#include<iostream>
using namespace std;


double t2(int x, int n)
{
    static double s;

    if(n==0){
        return s;
    }
    else{
        s=1+x*s/n;  //type cast to get double    
    }
    return t2(x,n-1);
}

int main()
{
    //  int r;
    //  cout<<"hey";
    // int x=1,m=10;
    
    cout<<t2(1,10);
    return 0;
}
