/*Write a C++ program to find out the sum of series 1^2 + 2^2 + …. +n^2.*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,sum=0,i=0,num=1;
  cin>>n;
  do{
      sum+=pow(num,2);
      num++;
      i++;
  }
  while(i<n);
  cout<<sum<<endl;
return 0;
}