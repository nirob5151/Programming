#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter 5 Number:";
    for ( i = 1; i <=5; i++)
    {
        cin>>n;
        sum=sum+n;
    }
    cout<<"Ans is:"<<sum;
    getch();
}