/*Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
 Include member functions to calculate the grade based on the marks and display the student’s information.
 Also, print the maximum mark with the help of a Maxi() function.*/
#include<bits/stdc++.h>
using namespace std;
class Student
{
    private:
    string name;
    int Class,roll,marks;
    public:
    
    void set_info()
    {
        cin>>name>>Class>>roll>>marks;
    }
    char calculateGrade() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }
    void get_info()
    {
        cout<<name<<"\t"<<Class<<"\t"<<roll<<"\t"<<marks<<calculateGrade();
    }
    
};
int main()
{
    Student ob[30];
    int n,i;
    cout<<"Number of Student: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        ob[i].set_info();
    }
    //cout<<"Name"<<"\t"<<"Class:"<<"\t"<<"Roll:"<<"\t"<<"Address"<<endl;
    for(i=0; i<n; i++)
    {
        ob[i].get_info();
    }
    return 0;
}

