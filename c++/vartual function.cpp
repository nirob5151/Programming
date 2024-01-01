#include<iostream>
using namespace std;
class King
{
    public:
    virtual void print()
    {
        cout<<"Queen: I am Back"<<endl;
    }
    void show()
    {
        cout<<"I Love you My Queen"<<endl;
    }
};
class Queen:public King
{
    public:
    virtual void print()
    {
        cout<<"King: I am Back"<<endl;
    }
    void show ()
    {
        cout<<"I Love You King"<<endl;
    }
};
int main()
{
    King * p;
    Queen ob;
    p=&ob;
    p-> print();
    p-> show();
    return 0;

}