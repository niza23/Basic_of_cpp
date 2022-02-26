#include<iostream>
using namespace std;
int add(int *a,int *b) { //pointers take the address passed by the main function
      
    int c= *a+ *b;
    return c;
}

int main()
{
    int x,y,z;
    x=10;
    y=100;
    z=add(&x,&y);  //it will pass the address to add function
    cout<<z;

    return 0;
}
