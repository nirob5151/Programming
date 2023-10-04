#include<bits\stdc++.h>
using namespace std;
class Mother
{
    protected:
    int a,b;
    public:
    void get_data()
    {
        cin>>a>>b;
    }
    void set_data()
    {
        cout<<"Sum Is:"<<a+b;
    }
};
class child:protected Mother
{
    public:
    void queen()
    {
        get_data();
    }
    void king()
    {
        set_data();
        cout<<"Sub is:"<<a-b;
    }

};
int main()
{
    child ob;
    ob.queen();
    ob.king();
}
