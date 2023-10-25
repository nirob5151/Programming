/*Write a C++ program to accept 5 numbers from the user one by one and display their sum on the screen.*/
#include<iostream>
using namespace std;
int main(){
  int i=0,num,sum=0;
  do{
    cin>>num;
    sum+=num;
    i++;
  } while(i<5);
  cout<<sum<<endl;
return 0;
}
