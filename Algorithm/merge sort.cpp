#include <bits/stdc++.h>
using namespace std;
void Merge(int ar[],int p, int mid, int r)
{
    int n1,n2;
    n1=mid-p+1;
    n2=r-mid;

    int L[n1+1];
    int R[n2+1];
    for(int i=0; i<n1; i++)
    {
       L[i]=ar[p+i];

    }
    for(int j=0; j<n2; j++)
    {
       R[j]=ar[mid+1+j];

    }

        L[n1] = INT_MAX;
        R[n2] = INT_MAX;
     int i=0,j=0;
    for(int k=p;k<=r;k++){
            if(L[i]<R[j]){
            ar[k]=L[i];
            i++;
            }
            else{
            ar[k]=R[j];
            j++;

            }
    }

}
void printArray(int ar[], int n)
{

    for ( int i = 0; i < n; i++)
        cout<<ar[i]<<" ";
}

void mergeSort(int ar[],int p, int r)
{
    int mid;
    if (p<r)
    {
        mid= (p+r)/2;
        mergeSort(ar,p,mid);
        mergeSort(ar,mid+1,r);
        Merge(ar,p,mid,r);

    }


}

int main()
{
    int n;
    cout<<"Enter Size:";
    cin>>n;
    int ar[n];
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    mergeSort(ar, 0, n-1);
    printf("After sorting- ");
    printArray(ar,n);
    return 0;
}