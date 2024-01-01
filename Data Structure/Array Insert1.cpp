#include<iostream>
using namespace std;
int main()
{
    int LA[6]={5,10,20,25,30},N=5,K=2,item=15,J=N,i;
    while (J>=K)
    {
        LA[J+1]=LA[J];
        J=J-1;
    }
    LA[K]=item;
    N=N+1;
    for ( i = 0; i < N; i++)
    {
        cout<<LA[i]<<endl;
    }
    return 0;
    
}