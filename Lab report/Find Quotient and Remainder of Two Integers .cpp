/*C++ Program to Find Quotient and Remainder of Two Integers Entered by User*/
#include<iostream>
using namespace std;
int main(){
  int num1,num2,rem,quo;
  cout<<"Enter num1: ";
  cin>>num1;
  cout<<"Enter num2: ";
  cin>>num2;
  rem= num1%num2;
  cout<<"Remainder: "<<rem<<endl;
  quo= num1/num2;
  cout<<"Quotient: "<<quo;
return 0;
}
