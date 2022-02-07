#include<iostream>
using namespace std;


struct rectangle
{
    /* data */
    int l;
    int b;
};

// struct rectangle
// {
//     /* data */
//     int l;
//     int b;
// } r; ---> can declare outside also


//struct rectangle r; --->this is will be accessable for all the function in your programe


int main()
{
    //declaration
    struct rectangle r;
    //declaration+initialization
    r.b=10;
    r.l=50;
    cout<<r.l<<" "<<r.b<<endl;

    cout<<"area of rectangle r "<<r.l*r.b;

    return 0;
}