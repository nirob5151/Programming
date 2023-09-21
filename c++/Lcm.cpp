#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int n,i,b,c=1;
    cout<< "Enter a Number:";
    cin>>n ;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    while (1)
    {
        if (b==2)
        {
            cout<< "LCM ="<<c;
            break;
        }
        else
        {
            for ( i = 0; i < n; i++)
            {
                if (c%a[i]==0)
                {
                    b=2;
                }
                else
                {
                    c++;
                    b=1;
                    break;
                }
            }
            
        }
        
    }
    
    getch();
}