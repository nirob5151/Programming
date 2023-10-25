#include<bits/stdc++.h>
using namespace std;
class Student
{
private:
string name;
int id;

    
public:
void data()
{
    cout<<"Enter Your Name:"<<endl;
    cin>>name;
    cout<<"Enter Your Id:"<<endl;
    cin>>id;
    

}
void print()
{
    cout<<"Name:"<<name;
    cout<<"Id:"<<id;
}  
};
class child:private Student
{
    private:
    int mark;
    public:
    void Mark()
    {
        data();
        cout<<"Enter Your Mark:"<<endl;
         cin>>mark;
    }
    void print_mark()
    {
        print();
        cout<<"Student Mark:"<<mark;

    }
};
int main()
{
    child ob;
    ob.Mark();
    ob.print_mark();
}
