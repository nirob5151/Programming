/*C++ Program to Check Vowel or Consonant*/
#include<iostream>
using namespace std;
int main(){
  char a;
  cin>>a;
  if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
   {
    cout<<a<<" is vowel";
    } else{
      cout<<a<<" is consonant";
   }
  return 0;
  }
