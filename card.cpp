#include<iostream>
using namespace std;

//
struct card
{
    /* data */
    int face;
    int shape;
    int color;
    char x;  //this will initially take 4 bytes
};

int main()
{
    //array of structure
    struct card deck[52] = {{1,0,0},{2,1,1}};
    cout<<sizeof(deck)<<endl;  // 52*(4*4)
    cout<<deck[0].color; //access the member
    return 0;
    
}