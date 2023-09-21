#include<bits/stdc++.h>
using namespace std;
void number(int,int);
int main()
{
    int a,b;
    cout<< "Enter Two Number";
    cin>>a>>b;
    number(a,b);
    return 0;

}
void number(int x,int y)
{
    int sum=0;
    sum=x+y;
    cout<<"sum is: "<<sum;
}