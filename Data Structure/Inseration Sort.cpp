#include<iostream>
using namespace std;
int main()
{
    int a[]={5,4,10,1,6,2},n=6;
    int i,temp,j;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while (j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        cout<<" "<<i;
    }
    return 0;
}