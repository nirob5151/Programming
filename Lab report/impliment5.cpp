#include<bits/stdc++.h>
using namespace std;
class Employee
{
    private:
    string name;
    int salary,year_of_join;
    public:
    friend int information(Employee ob);
};
     int information(Employee ob)
     {
        cout<<"1.Enter Name: ";
        cin>>name;
        cout<<"2.Enter Salary: ";
        cin>>salary;
        cout<<"3.Enter Hire Date: ";
        cin>>year_of_join;
        cout<<"Employ 1: "<<name<<" "<<year_of_join<<" "<<endl;

     };
     int main()
     {
        Employee ob;
        ob.information(ob);
        return 0;
     }
     