#include<iostream>
using namespace std;

class Student
{
int id;
char name[100];
public:
void getdata()
{
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Id : ";
    cin>>id;
}
void printdata()
{
    cout<<"Name Is: "<<name<<" ";
    cout<<"Id Is: "<<id<<" "<<endl;
}
};
int main()
{
   Student ob;
   ob.getdata();
   ob.printdata();
    return 0;

}
