#include<iostream>
#include<math.h>

using namespace std;
int main()
{
   int x,y,z,a,b;
   cin>>x>>y>>z;
   a=(-y+(sqrt(y*y)-(4*x*z)))/(2*x);

   b=(-y-(sqrt(y*y)-(4*x*z)))/(2*x);
   cout<<"roots"<<a<<endl;
   cout<<"quadratic"<<b;
    return 0;
}

