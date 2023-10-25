#include<iostream>
using namespace std;
int main(){
  int a[10][10],b[10][10],sub[10][10],i,j,r,c;
  cin>>r>>c;
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      cin>>a[i][j];
    }}
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      cin>>b[i][j];
    } }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      sub[i][j]=a[i][j]-b[i][j];
    }}
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      cout<<"\t"<<sub[i][j];
    }
    cout<<endl;
  }

return 0;
}
