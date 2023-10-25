/*Write a C++ program to find out the NPR factor of a given number.*/
#include<iostream>
using namespace std;
int main(){
  int i,r,n,nfact=1,nrfact=1;
  cin>>n;  cin>>r;
  for(i=1;i<=n;i++){
      nfact*=i;
  }  int sub=n-r;
  for(i=1;i<=sub;i++)  { nrfact*=i; }
 float npr=nfact/nrfact;
  cout<<"npr is:"<<npr<<endl;
return 0;
}
