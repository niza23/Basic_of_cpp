#include<iostream>
using namespace std;

struct rect
{
    /* data */
    int l;
    int b;
};

int main()
{
    rect r={10,12};  //for normal variable use .(dot)
    cout<<r.b<<endl;
    cout<<r.l<<endl;

    rect *p=&r; //for pointer pointing to a structure use arrow
    cout<<p->b<<endl;
    cout<<p->l<<endl;


    //how to create an object of rect in heap
    rect *q;
    q=new rect;
    q->l=18;
    q->b=12;

    cout<<q->b<<endl;
    cout<<q->l;

return 0;
}