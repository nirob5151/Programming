#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,factorial=1;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
      cout<<"Factorial Number Is:"<<factorial;
}