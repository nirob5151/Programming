/*Class A has an int n1 and class B has an int n2. Calculate the sum of two variables in class C.*/

#include<iostream>
#include<cstring>
using namespace std;
  class A{
  public:
    int n1=30;
  };
  class B{;
    public:
    int n2=40;
  };
  class C: public A, public B{;
    public:
    int sum=n1+n2;
    void getsum(){
    cout<<sum<<endl;}
  };
  int main(){
    C ob;
    ob.getsum();
return 0;
}