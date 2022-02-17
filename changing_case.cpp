#include<iostream>
using namespace std;

int main()
{
    char s[]="HELLO";
    char c[]="hey";
    char h[]="HoWarE124t";  //integers will remain unchanged

    int i;
    for(i=0;s[i]!='\0';i++)  //upper to lower case
    {
        s[i]=s[i]+32;
    }
    cout<<"lower case "<<s<<endl;

    for(i=0;c[i]!='\0';i++)  //lower to upper case
    {
        c[i]=c[i]-32;
    }
    cout<<"upper case "<<c<<endl;

    for(i=0;h[i]!='\0';i++)  //mix
    {
        if(h[i]>=65 && h[i]<=90)
        {
            h[i]+=32;
        }
        else if(h[i]>=97 && h[i]<=122)
        {
            h[i]-=32;
        }
    }
    cout<<"mix "<<h;
    return 0;
}