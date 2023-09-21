#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter a Value";
    cin>>n;
    for ( i= 1; i<= n; i++)
    {
        cout<<"^"<<i;
        sum=sum+(i*i);
    }
    cout<<"="<<sum;
    getch();
    
}