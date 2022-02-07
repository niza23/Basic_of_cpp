#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p; //---->declaration
    p=&a;   //--->initialisation
    cout<<"address of a using p "<<p<<endl; //adress of a
    cout<<"value at a "<<*p<<endl;  //--->DEREFRENCING

    cout<<"pointer to an array"<<endl;
    int b[5]={1,2,3,4,5};
    int *q;
    q=b; //no need of &

    for(int i=0;i<5;i++)
    {
        cout<<q[i]<<endl;
    }

    cout<<"array in heap"<<endl;
    int *r;
    r=new int[5]; //made a request to get memory from heap
    r[0]=5;
    r[1]=10;
    r[2]=4;
    r[3]=5;
    r[4]=5;
    for(int i=0;i<5;i++)
    {
        
        cout<<r[i]<<endl;
    }

    delete [] r; //delete the memeory allocated by memroy
   
   cout<<"size of pointers"<<endl;
   int *p1;
   char *p2;
   float *p3;
   double *p4;
   struct rec *p5;

   cout<<"size of p1 "<<sizeof(p1)<<endl;
   cout<<"size of p2 "<<sizeof(p2)<<endl;
   cout<<"size of p3 "<<sizeof(p3)<<endl;
   cout<<"size of p4 "<<sizeof(p4)<<endl;
   cout<<"size of p5 "<<sizeof(p5)<<endl;

   //the size of pointer is fixed i.e. 4 bytes in all cases
   //size of pointer is indeppendent of its data type
   
   return 0; 
}
