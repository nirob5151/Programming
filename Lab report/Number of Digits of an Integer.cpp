/*Write a C++ Program to Count the Number of Digits of an Integer.*/
#include<iostream>
using namespace std;
int main(){
  int n,r=0,sum=0;
  cin>>n;
  while(n!=0){
    n=n/10;
    sum++;
  }
  cout<<"Number of Digits: "<<sum;
return 0;
}
