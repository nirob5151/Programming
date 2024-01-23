#include<iostream>
using namespace std;
int main()
{
    int a[50],size,i;
    cout<<"Enter Array Size:";
    cin>>size;
    cout<<"Enter The Element Of Array are:";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Array Element Are:";
    for ( i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
    
}
