/*Write a C++ program to input any number from the user and display 
the total of its digits ( I/p: 32 o/p: 5)*/
#include<iostream>
using namespace std;
int main()
{
  long long int n,rem,sum=0;
  cin>>n;
  for(n;n!=0;n=n/10)
  {
    rem=n%10;  
    sum+=rem;
  }
  cout<<"Sum Is: "<<sum<<endl;
 return 0;  
}
