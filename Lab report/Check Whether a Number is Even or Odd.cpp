/*C++ Program to Check Whether a Number is Even or Odd*/
#include<iostream>
using namespace std;
int main(){
  int num1;
  cout<<"Enter num1: ";
  cin>>num1;
  if (num1%2==0){
      cout<<num1<<" is an even number";
  }else{
      cout<<num1<<" is an odd number";
  }
return 0;
}
