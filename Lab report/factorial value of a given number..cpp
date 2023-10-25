/*Write a C++ program to find out the factorial value of a given number*/
#include<iostream>
using namespace std;
int main(){
  int i,n,fact=1;
  cout<<"Enter any Number: ";
  cin>>n;
  for(i=1;i<=n;i++){
      fact*=i;
  }
  cout<<"Factorial of " <<n<<"! is: "<<fact<<endl;
return 0;   
 }
