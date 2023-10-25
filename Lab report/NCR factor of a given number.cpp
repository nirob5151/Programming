/*Write a C++ program to find out the NCR factor of a given number.*/
#include<iostream>
using namespace std;
int main(){
  int i,r,n,nfact=1,nrfact=1,rfact=1;
  cin>>n; cin>>r;
  for(i=1;i<=n;i++){
      nfact*=i;  } for(i=1;i<=r;i++) {  rfact*=i; }
  int sub=n-r;
  for(i=1;i<=sub;i++) {  nrfact*=i;  }
  float ncr=nfact/(rfact*nrfact);
  cout<<"ncr is:"<<ncr<<endl;
return 0;}
