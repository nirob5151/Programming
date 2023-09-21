#include<iostream>
#include<conio.h>
using namespace std;
int number(int num)
{
    int sum=0;
    
    while(num!=0)
    {
        sum += num % 10;
        num = num / 10;
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