/*C++ Program to Calculate the Average of Numbers Using Arrays.*/
#include<iostream>
using namespace std;
int main(){
  int n,num[100],i,sum=0;
  float avg;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>num[i];
    sum+=num[i];
  }
  avg=(float)sum/n;
  cout<<"Avg Is: "<<avg<<endl;
return 0;
}
