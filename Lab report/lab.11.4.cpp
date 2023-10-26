/*Print 10 students' Names & Mark with the help of an array of objects*/
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
   Student ob[30];
   int n,i;
   cout<<"How many student you enter: ";
   cin>>n;
   for(i=0;i<n;i++)
   {
    ob[i].getdata();
   }
   cout<<"Student Data"<<endl;
   for(i=0;i<n;i++)
   {
   ob[i].printdata();
   }
    return 0;

}
