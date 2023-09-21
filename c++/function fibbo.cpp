# include<bits/stdc++.h>
using namespace std;
int number(int x)
{
    int i,n1,n2,n3;
    for ( i=1; i<=x-2; i++)   // or for ( i=2; i<=N; i++)
    {
        n3=n1+n2;
        cout<<" "<<n3;
        n1=n2;
        n2=n3;

    }
}
int main()
{
    int n;
    cin>>n;
    cout<<number(n);
}