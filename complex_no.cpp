 #include<iostream>
 #include<math.h>
using namespace std;

struct complex
{
    /* data */
    int real;
    int img;
};

int main()
{
    struct complex c;
    //float i=sqrt(-1);
    c.img=5;
    c.real=10;
    //or struct complex c={5,10}
    cout<<c.real<<"+"<<c.img<<"i";
}