#include<iostream>
#include<conio.h>
using namespace std;
int number(int temp)
{
    int r,sum=0;
    
    while(temp!=0)
    {
        r= temp % 10;
        sum=sum+r;
        temp=temp/10;
    }
    return sum;
}
int main()
{
    int n,sum=0;
    cin>>n;
    sum=number(n);
    cout<<"Sum of Degit "<<sum ;
    getch();
}