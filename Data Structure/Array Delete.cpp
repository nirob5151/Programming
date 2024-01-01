#include<iostream>
using namespace std;
int main()
{
    int i,j,N=5,K=3,item,LA[5]={5,10,15,20,25};
    item=LA[K];
    for ( i = K; i < N-1; i++)
    {
        LA[i]=LA[i+1];
    }
        N=N-1;
        cout<<"Delete Item Is:"<<item<<endl;
    for ( j = 0; j < N; j++)
    {
        cout<<LA[j]<<endl; 
    }
    return 0;
    
}