#include<iostream>
using namespace std;
int main()
{
    int i,N=30,K,LA[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    cout<<"Enter Iteam betwen 1-30 you want to search ";
    cin>>K;
    for ( i = 0; i < N; i++)
    {
        if(LA[i]==K)
        {
            cout<<"Search Iteam In Index No : "<<i;
            break;
        }
    }
    if(i==N)
    {
        cout<<"Search Iteam Not Found";
    }
    return 0;
}