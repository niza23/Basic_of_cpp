#include<iostream>
using namespace std;

//template is used when you data type is not fixed
template<class T>
class arithmetic
{
    private:
    T a;
    T b;
    public:
    arithmetic(T a,T b);
    T add();
};
template<class T>
arithmetic<T> ::arithmetic(T a,T b)
{
    this->a=a;
    this->b=b;
}
template<class T>
T arithmetic<T>::add()
{
    T c;
    c=a+b;
    return c;
}

int main()
{
    arithmetic<float> ar(114.44,434.4);

    cout<<"add "<<ar.add();

    return 0;
}
