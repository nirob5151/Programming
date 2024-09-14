#include <iostream>
using namespace std;
int main()
{
    int N=30,K,BA[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int l=0,r=N-1,mid;
    cout<<"Enter Iteam betwen 1-30 you want to search ";
    cin>>K;
    while (l<r)
    {
        mid=(l+r)/2;
        if (K==BA[mid])
        {
            cout<<"search index in:"<<BA[mid];
            break;
        }
        else if(K<BA[mid])
        {
            r=mid-1;
        }else{
            l=mid+1;
        } 
    }
    if (l>r)
    {
        cout<<"search not found!!";
    }    
}