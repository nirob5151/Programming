#include<iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;
};
class student:public Person
{
    public:
    void print()
    {
        cout<<"Enter Your Name & Age: ";
        cin>>name>>age;
        cout<<"Name---Age: "<<name<<"---"<<age<<endl;
    }
};
class faculty:public Person
{
    public:
    void print2()
    {
        cout<<"Enter Your Faculty Name & Age:";
        cin>>name>>age;
        cout<<"Faculty Name---Age: "<<name<<"---"<<age<<endl;
    }
};
class TA:public student,public faculty
{
    public: 
     void print3()
     {
        print();
        print2();
     }
};
int main()
{
    TA ob;
    ob.print3(); 
    return 0;
}
