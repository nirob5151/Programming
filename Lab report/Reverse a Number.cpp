/*Write a C++ Program to Reverse a Number*/
#include<iostream>
using namespace std;
int main(){
  int n,r,rev=0,temp;
  cin>>n;
  temp=n;
  while(temp!=0){
    r=temp%10;
    rev=(rev*10)+r;
    temp=temp/10;
  } cout<<"Reverse Number Is: "<<rev;
return 0;
}
