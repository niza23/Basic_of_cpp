#include<iostream>
using namespace std;
struct array
{
    int a[20];
    int size;
    int len;
};
void display(struct array arr)
{
   for(int i=0;i<arr.len;i++)
    {
        cout<<arr.a[i]<<endl;
    } 
}

int isSorted(struct array arr)  //check if it is sorted nor not
{
    for(int i=0;i<arr.len-1;i++)
    {
        if(arr.a[i]>arr.a[i+1])
        {
            return 0;
        }
        
    }
    return 1;
}

int main()
{
    struct array arr={{2,3,4,7,6},10,5};

    cout<<isSorted(arr);
    //display(arr);
}