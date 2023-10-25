#include<iostream>
#include<cmath>
using namespace std;

int fact(int n)
{
    if(n!=0){
        return fact(n-1)*n;
    }
    return 1;
}
int main()
{
   int n;
   cin>>n;
   cout<<"factorial of "<<n<<" : "<<fact(n)<<endl;
   return 0;
}
