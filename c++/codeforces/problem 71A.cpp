# include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
       cin>>s;
       if(s.length()>10)
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
        else
        cout<<s<<endl;
       
    }
    return 0;
}