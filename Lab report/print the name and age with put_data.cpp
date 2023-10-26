#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    void get_data()
    {
        cout<<"Enter Your Name: ";
        cin>>name;
        cout<<"Enter Your Age: ";
        cin>>age;
    }
    void put_data()
    {
        cout<<"Name Is: "<<name<<endl;
        cout<<"Age is: "<<age;
    }
};
int main()
{
    Person ob;
    ob.get_data();
    ob.put_data();
}