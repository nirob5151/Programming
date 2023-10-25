/*Write a C++ Program to find the largest of n numbers.*/
#include<iostream>
using namespace std;
int main(){
  int n,i,num,largest=0;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>num;
    if(num>largest){
      largest=num;
    } }
  cout<<"Largest Number Is: "<<largest<<endl;
return 0;
}
