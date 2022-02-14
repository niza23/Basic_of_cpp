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
void InsertSort(struct array *arr, int x)
{
    int i=arr->len-1;
    if(arr->len==arr->size)
    {
        return ;
    }
    else{
        while(i>=0 && arr->a[i]>x)
        {
            arr->a[i+1]=arr->a[i];
            i--;
        }
        arr->a[i+1]=x;
        arr->len++;
    }
}

int main()
{
    struct array arr={{2,3,4,5,7},10,5};

    InsertSort(&arr,6);
    display(arr);
}