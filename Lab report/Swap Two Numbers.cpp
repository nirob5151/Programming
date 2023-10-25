/*C++ Program to Swap Two Numbers*/
#include<iostream>
using namespace std;
int main(){
  int a,b, temp;
  cout<<"Enter a: ";
  cin>>a;
  cout<<"Enter b: ";
  cin>>b;
  temp=b; b=a;  a=temp;
  cout<<"a= "<<a<<endl;  cout<<"b= "<<b;
return 0;}