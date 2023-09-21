# include<bits/stdc++.h>
using namespace std;
int number(char x)
{
    if (x>='A' && x<='Z')
    {
        cout<<"Capital Latter";
    }
    else if(x>='a' && x<='z')
    {
        cout<<"small latter";
    }
    else if(x>='0' && x<='9')
    {
        cout<<"Numerical Number";
    }
    else 
    {
        cout<<"Symbol";
    }
}
int main()
{
    char num;
    cout<< "Enter anything";
    cin>>num;
    number(num);
    return 0;

}
