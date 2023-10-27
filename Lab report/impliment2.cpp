/*Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
 Include member functions to calculate the grade based on the marks and display the student’s information.
 Also, print the maximum mark with the help of a Maxi() function.*/
#include <algorithm>
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int roll,cls,marks;
public:
    friend void Maxi(Student o1, Student o2, Student o3);
    Student(string nam, int rol, int cl, int mrk)
    {
        name = nam;
        roll = rol;
        cls = cl;
        marks=mrk;
    }
    char Grade()
    {
        if (marks >= 90)
        {
            return 'A';
        }
        else if (marks >= 80)
        {
            return 'B';
        }
        else if (marks >= 70)
        {
            return 'C';
        }
        else if (marks >= 60)
        {
            return 'D';
        }
        else
        {
            return 'F';
        }
    }
    void Display()
    {
        cout << "Name: " << name << endl;
        cout << "Class: " << cls<< endl;
        cout << "Roll Number: " << roll<< endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << Grade() << endl;
    }
};
void Maxi(Student o1, Student o2, Student o3)
{
    int m = max({o1.marks, o2.marks, o3.marks});
    cout <<"Maximum Mark is= "<<m<<endl;
}
int main()
{
    Student o1("Nahid",13,143,80);
    Student o2("Nirob",14,222,70);
    Student o3("Arif",15,333,60);
    o1.Grade();
    o1.Display();
    o2.Grade();
    o2.Display();
    o3.Grade();
    o3.Display();
    Maxi(o1,o2,o3);
    return 0;
}