#include<iostream>
using namespace std;

int main() {
     int a[5]={1,2,3,4,4};
     int i;
     for(i=0;i<5;i++)
     {
         cout<<a[i]<<endl;
     }
     cout<<sizeof(a)<<endl; //size for 1 element= 4 bytes
  

     //another way

     for(int x:a)
     {
         cout<<x<<endl; //x will take values one by one
     }

        return 0;
}