#include<iostream>
using namespace std;

//reference is just another name and it doesnt consume any memeory; it is not like a pointer
int main()
{
    int a=10;
    int &r=a;

    cout<<"value of a "<<a<<endl;
    cout<<"value of r "<<r<<endl;
    r++;
    cout<<"value of a "<<a<<endl;
    a++;
    cout<<"value of r "<<r<<endl;
    return 0;

    int b=20;
    int c;
    c=b;
    //here c is not a refrence to b, it just stores the value of b inside
}