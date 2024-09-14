#include<iostream>
using namespace std;
int Partition(int a[], int p,int r)
{
    int i=p;
    int j=r;
    int pvot=a[p];
    while(i<j)
    {
        do
        {
            i++;
        }
        while(pvot>a[i]);
        do
        {
            j--;
        }
        while(pvot<a[j]);
        if(i<j)
            swap(a[i],a[j]);
    }
    if(j<i)
    {
        swap(a[p],a[j]);
    }
    return j;
}
void Qsort(int a[],int p,int r)
{
    if(p<r)
    {

        int pvot=Partition(a,p,r);
        Qsort(a,p,pvot);
        Qsort(a,pvot+1,r);
    }
}
int main()
{
    int n;
    cin >> n;
    int b[n];
    for (int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    Qsort(b,0,n);
    for (int i=0; i<n; i++)
    {
        cout << b[i] << ' ' ;
    }
}


