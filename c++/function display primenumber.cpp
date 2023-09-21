# include<bits/stdc++.h>
using namespace std;
int number(int x)
{
     int n=0;
     for(int i=2; i<=x; i++)
     {

        if(x % i ==0)
        {
            n++;
            break;
        }
     }
     if (x!=1 && n==0)
     {
        cout<<"Prime Number";
     }
    else
    {
        cout<<"Number is Prime";
    }
    return 0;
}