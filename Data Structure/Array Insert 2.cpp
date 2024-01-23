#include <iostream>
using namespace std;
int main()
{
    int a[50],size,pos,num,i;
    cout<<"Enter Array Size: ";
    cin>>size;
    cout<<"Enter Arry Element: ";
    for ( i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Pos You want To Insert:";
    cin>>pos;
    cout<<"Enter Number You Want To  Insert: ";
    cin>>num;
    cout<<"Array Size: "<<size<<endl;
    for ( i = size-1; i >= pos-1; i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    cout<<"Arrey Element Are:\n";
    for ( i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Now Array size is: "<<size;
    return 0;   
}