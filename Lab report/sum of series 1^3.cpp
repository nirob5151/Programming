/*. Write a C++ program to find out the sum of series 1^3 + 2^3 + …. +n^3.*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,sum=0,i=0,num=1;
  cin>>n;
  for(i=0;i<n;i++){
      sum+=pow(num,3);
      num++;
  }
  cout<<sum<<endl;
return 0;
}
