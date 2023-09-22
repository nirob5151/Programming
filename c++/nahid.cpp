#include<bits/stdc++.h>
using namespace std;
class massage
{
   public:
   void call()
   {
    cout<<"Hello Everyone"<<endl;
   }
    virtual void sendmassage()=0;
};
class king:public massage
{
    cout<<"Hi i am king"<<endl;

};
class nirob:public massage
{
    cout<<"THIS IS NIROB";
};
int main()
{
    massage *m;
    king k;
    nirob n;
    m->call();
    m=&k;
    m->sendmassage();
    m=&n;
    m->sendmassage();
    return 0;
}