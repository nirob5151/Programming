#include<bits/stdc++.h>
using namespace std;
class Mobileuser
{
    public:
        void call()
         {
                cout<<"Someone: Hello King"<<endl;
         }
         virtual void sendmassage()=0;
};
class King:public Mobileuser
{

public:
    void sendmassage()
    {
        cout<<"King: Hi I am king ";
        cout<<"and This is My friend Nirob"<<endl;
    }
};

class Nirob:public Mobileuser
{

    public:
          void sendmassage()
          { 
            cout<<"Niob: Hi"<<endl;
          }
          
};
int main()
{
    Mobileuser *m;
    King k;
    Nirob n;
    m->call();
    m=&k;
    m->sendmassage();
    m=&n;
    m->sendmassage();
    return 0;
}
