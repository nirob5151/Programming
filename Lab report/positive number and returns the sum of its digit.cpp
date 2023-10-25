#include<iostream>
#include<cmath>
using namespace std;

int sumdig(int n)
{
    int tem,sum=0,rem;
    tem=n;
    while(tem!=0){
        rem= tem%10;
        sum+=rem;
        tem=tem/10;
    }
    return sum;
}
int main()
{
   int n;
   cin>>n;
   cout<<sumdig(n)<<endl;
   return 0;
}