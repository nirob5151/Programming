#include <iostream>
using namespace std;
#include<cstring>
int main()
{
char s1[100],s2[100];
int pos,length,i=0;
cout<<"Enter Your String: ";
cin>>s1;
cout<<"Enter Your Position:";
cin>>pos;
length=strlen(s1);
while(i<length)
{
    s2[i]=s1[i+pos-1];
    i++;
}
cout<<"Resulting String:";
cin>>s2;
    return 0;
}