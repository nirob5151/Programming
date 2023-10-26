/*Apply the code given in last class*/
#include<iostream>
using namespace std;
class W
{
    protected:
        int n1,n2;
    public:
        void display()
        {
            cin>>n1>>n2;
            cout<<n1+n2;
        }

};
class X:public W
{
    public:
        X()
        {
           
            display();
        }
};

class Y:public W
{
    public:
        Y()
        {
            
        }
};


class Z:public X,public Y
{

};
int main()
{
    Z ob;

}