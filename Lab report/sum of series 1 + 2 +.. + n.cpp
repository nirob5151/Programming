/*Write a C++ program to find out the sum of series 1 + 2 +.. + n.*/
#include<iostream>
using namespace std;
int main(){
  int n,sum=0,i=0,num=1;
  cin>>n;
  while(i<n){
      sum+=num;
      num++;
      i++;
  }
  cout<<sum<<endl;
return 0;
}
