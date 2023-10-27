/*Create a class called Employee with a name, salary, and hire date as private attributes.
 With the help of a friend function, calculate the total year of service.*/
#include<bits/stdc++.h>
using namespace std;
class Employee
{
    private:
    string name;
    int salary;
    int year_of_join,current_year;
    public:
    friend int information(Employee ob);
};
     int information(Employee ob)
     {
        cout<<"Enter Name: ";
        cin>>ob.name;
        cout<<"Enter Salary: ";
        cin>>ob.salary;
        cout<<"Enter Hire Year: ";
        cin>>ob.year_of_join;
        cout<<"Enter Curent Year: ";
        cin>>ob.current_year;
       // system("cls");
        cout<<"Employ info: "<<endl;
        cout<<"Name:"<<ob.name<<endl<<"Year Of Joine: "<<ob.year_of_join<<endl;
        cout<<"Total year of service: "<<ob.current_year- ob.year_of_join;
     }
     int main()
     {
        Employee ob;
       int year_of_servic=information(ob);
        return 0;
     }
     