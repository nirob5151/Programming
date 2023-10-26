/*Send your first name and last name to a class through the object. 
Join two names with the help of the ‘+’ operator overloading and print the full name.*/

#include<bits/stdc++.h>
using namespace std;
class Name
{
    public:
    string fname,lname;
     void name(string a,string b)
     {
        fname=a;
        lname=b;
     }
     Name operator+(Name const& obj) 
    { 
        Name res; 
        res.fname = fname + obj.fname; 
        res.lname = lname + obj.lname; 
        return res; 
    } 
    void print() 
    { 
        cout << fname <<" "<< lname <<endl;
    }

};
int main()
{
    string n,m;
    cin>>n>>m;
    Name ob;
    ob.name(n,m);
    ob.print();

}
