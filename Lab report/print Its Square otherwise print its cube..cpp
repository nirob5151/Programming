/*C++ Program to input a number. If the number is even, print Its Square otherwise print its cube.*/
#include<iostream>
using namespace std;
int main()
{
  int a;
  cin>>a;
  if(a%2==0){
      cout<<a*a;
    }
  else{
      cout<<a*a*a;
    }
return 0;
}
