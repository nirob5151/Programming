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