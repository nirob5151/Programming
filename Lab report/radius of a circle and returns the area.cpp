#include<iostream>
#include<cmath>
using namespace std;

float area(float r)
{
    return(M_PI*r*r);
}
int main()
{
   float r;
   cin>>r;
   cout<<"area: "<<area(r)<<endl;
   return 0;
}