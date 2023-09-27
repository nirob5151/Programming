#include<bits/stdc++.h>
using namespace std;
class Employee
{
    public:
    string name,address;
    int salary,year_of_join;
     int information()
     {
        cout<<"1.Enter Name: ";
        cin>>name;
        cout<<"2.Enter Salary: ";
        cin>>salary;
        cout<<"3.Enter Hire Date: ";
        cin>>year_of_join;
        cout<<"Enter Your Address: ";
        cin>>address;
        cout<<"Employ 1: "<<name<<" "<<year_of_join<<" "<<address<<endl;

     }
     
};
int main()
{
        cout<<"------------Enter Employee Data------------"<<endl;
        int n,i;
        cout<<"How Many Employee You Add: ";
        cin>>n;
        Employee ob;
        for(i=0;i<n;i++)
        {
        ob.information();
        }
        return 0;
}