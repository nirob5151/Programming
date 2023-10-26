/*Take an array in the parent class and calculate the average of that array's elements in the child class.*/

#include<bits/stdc++.h>
using namespace std;
class Mother
{
    private:
    int i,n;
    float sum=0.0,a[100];
    public:
    void king()
    {
        cout<<"Enter How Many Array You Wand:";
        cin>>n;
    }
    void queen()
    {
        for(i=0;i<n;i++)
        {
            cout<<i+1<<"."<<"Array Is:";
            cin>>a[i];
             sum += a[i];
        }
        cout<<"Average Is: "<<sum/n;
    }
};
class child:private Mother
{
    public:
    void cin()
    {
        king();
    }
    void cout()
    {
       queen();
    
    }
};
int main()
{
    child ob;
    ob.cin();
    ob.cout();
}