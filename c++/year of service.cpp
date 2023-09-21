#include<bits/stdc++.h>
using namespace std;
class Employee
{
    public:
    string name;
    int salary,hire_year,current_year;
    void yearofservice()
    {
        cout<<"------------Enter Employee Data------------"<<endl;
        cout<<"1.Enter Name: ";
        cin>>name;
        cout<<"2.Enter Salary: ";
        cin>>salary;
        cout<<"3.Enter Hire Date: ";
        cin>>hire_year;
        cout<<"4.Enter Current Date: ";
        cin>>current_year;
        cout<<"Working Time: "<<current_year-hire_year<<" Years";
    }

};
int main()
{
    Employee ob;
    ob.yearofservice();
}