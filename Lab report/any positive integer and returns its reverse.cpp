#include<iostream>
#include<cmath>
using namespace std;

int reverse(int n)
{
    int tem,sum=0,rem;
    tem=n;
    while(tem!=0){
        rem= tem%10;
        sum=sum*10+rem;
        tem=tem/10;
    }
    return sum;
}
int main()
{
   int n;
   cin>>n;
   cout<<reverse(n)<<endl;
   return 0;
}
