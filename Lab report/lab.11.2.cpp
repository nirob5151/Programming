/*A class grand has two protected type variable IDs , Marks.
 A parent class inherits from the grand class. 
Another class child inherits from the parent class. 
The child class prints the ID , Marks of the grand class.*/
#include<bits/stdc++.h>
using namespace std;
class Grand
{
    protected:
    int id,mark;
};
class Parent:protected Grand
{
    public:
    void add()
    {
        cout<<"Enter Your Id & Mark : ";
        cin>>id>>mark;
    }
};
class Child:public Parent
{
 public:
 void print()
 {
    cout<<"Id Is: "<<id<<endl;
    cout<<"Mark Is:"<<mark<<endl;
 }
};
int main()
{
    Child ob;
    ob.add();
    ob.print(); 
    return 0;
}