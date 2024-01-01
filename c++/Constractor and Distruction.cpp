#include<iostream>
using namespace std;
class B
{
    public:
    int n=5;
    int m=6;
    B()
    {
        cout<<"This Is Constractor"<<endl;
    }
};
class A:public B
{
    public:
     ~ A()
    {
        cout<<"This Is Distruction"<<endl;
    }
};
class C:public B
{
    public:
    C()
    {
        cout<<n+m<<endl;
    }
    ~C()
    {
        cout<<m-n<<endl;
    }
};
int main()
{
    A ob;
    B ob2;
    C ob3;

}