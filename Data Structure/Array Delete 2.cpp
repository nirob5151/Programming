#include<iostream>
using namespace std;
int main()
{
    int i,j,N=5,K,item,LA[5]={5,10,15,20,25};

    cin>>K;
    item=LA[K];
    if (item<=0 || N>item)
    {
        cout<<"Envlide Entry";
    }
    else
    {
    for ( i = K-1; i < N-1; i++)
    {
        LA[i]=LA[i+1];
    }
        N=N-1;
        cout<<"Delete Item Is:"<<item<<endl;
    for ( j = 0; j < N; j++)
    {
        cout<<LA[j]<<endl; 
    }
    }
    return 0;
    
}