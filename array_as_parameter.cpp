#include<iostream>
using namespace std;

void fun(int *a,int n) //pointer to an array;  fun(int a[],int n)
{
    cout<<"size of an pointer/size of an int "<<sizeof(  a)/sizeof(int)<<endl;


    // for(int A:a)
    // cout<<A<<endl; --> we cannot use for on a pointer

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;

    }

    a[0]=15;  //the value will change in array
}
int main()
{
    int a[5]={1,2,3,4,5};
    int n=5;
    fun(a,5);
    cout<<"size of an array "<<sizeof(a)/sizeof(int)<<endl;


    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;

    }

    return 0;
}