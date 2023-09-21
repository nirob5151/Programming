#include<bits/stdc++.h>
using namespace std;
class Mobileuser
{
    public:
        void call()
         {
                cout<<"Hello"<<endl;
         }
         virtual void sendmassage()=0;
};
class King:public Mobileuser
{

public:
    void sendmassage()
    {
        cout<<"Hi I am king"<<endl;
    }
};

class Nirob:public Mobileuser
{

public:
    public:
          void sendmassage()
          { 
            cout<<"Hi This is Nirob"<<endl;
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
