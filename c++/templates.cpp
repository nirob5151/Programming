#include<iostream>
using namespace std;
template <class T> 
T king(T x, T y)
{
    return x+y;
}
int main()
{
    cout<<king(20,30)<<endl;
    cout<<king(20.5,30.5);
}