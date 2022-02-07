#include<iostream>
using namespace std;
//call by address
struct text
{
    /* data */
    int a;
    int n;
};
void fun(struct text *p,int l)
{
    p->n=l;
    p->a=20;  //it will change the values
    cout<<p->n<<" "<<p->a<<endl; 
}
int main()
{
    struct text r={4,6};
    fun(&r,5);
    cout<<r.n<<" "<<r.a;

    return 0;
}

