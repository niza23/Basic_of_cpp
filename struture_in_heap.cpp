#include<iostream>
using namespace std;
//call by address
struct text
{
    /* data */
    int a;
    int n;
};
struct text *fun()  //function returning a pointer of an object created in heap
{
    struct text *p;
    p=new text;  //object in heap
    p->n=35;
    p->a=20;  
    return p;
    }
int main()
{
    struct text *r=fun();
    
    cout<<r->a<<" "<<r->n;

    return 0;
}

