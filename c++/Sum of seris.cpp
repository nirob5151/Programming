#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int i,N,sum=0;
    cout<<"Enter the value:";
    cin>>N;
    for ( i = 1; i <=N; i++)
    {
        cout<<i;
        sum=sum+i;
    }
    
     cout<<"="<<sum;
     getch();
}
