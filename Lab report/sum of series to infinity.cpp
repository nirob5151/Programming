/*Write a C++ program to find out the sum of series 1 + 2 + 4 + 8 … to infinity.*/
#include<iostream>
using namespace std;
int main(){
  int n,sum=0,num=1,i;
  cin>>n;
  for(i=0;i<n;i++){
      sum=sum+num;
      num=num*2;
  }
  cout<<sum<<endl;
return 0;
}
