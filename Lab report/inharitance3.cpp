/*Take an array in the parent class and calculate the average of that array's elements in the child class.*/

#include<bits/stdc++.h>
using namespace std;
class Mother
{
    private:
    int i,n,sum=0,a[10];
    float avg;
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
            cout<<"Array Is:"<<i;
            cin>>a[i];
            sum+=a[i];
        }
        avg=a[i]/n;
        cout<<"Average Is: "<<avg;
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