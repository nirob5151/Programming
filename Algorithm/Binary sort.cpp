#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int x, int lv, int uv){
    if (lv<=uv)
    {
        int mid=(lv+uv)/2;
        if (arr[mid]==x)
        {
            return mid;
        }
        else if (arr[mid]<x)
        {
            BinarySearch(arr,x,mid+1,uv);
        }
        else{
            BinarySearch(arr,x,lv,mid-1);
        }
    }
    else
    return -1;
    
}
int main(){
    int len;
    cout<<"Enter Array Size: ";
    cin>>len;
    int arr[len];
    cout<<"Enter Elements: ";
    for (int i = 0; i < len; i++)
    {
        cin>>arr[i];
    }
    int checkVal;
    cout<<"Enter a value which you want to searccch: ";
    cin>>checkVal;
    int checkIndex= BinarySearch(arr,checkVal, 0,len-1);
    if (checkIndex != -1)
    {
        cout<<checkVal<<" Index- "<<checkIndex<<" Position- "<<checkIndex+1<<endl;
    }
    else
    cout<<"Not Found"<<endl;
 return 0;
}