#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks<0 || marks>100)
    {
        cout<<"Wrong Entry";
    }
    else if(marks<40)
    {
        cout<<"Grade F";
    }
    else if (marks>=40 && marks<45)
    {
        cout<<"Grade D";
    }
    else if (marks>=45 && marks<50)
    {
        cout<<"Grade C";
    }
    else if (marks>=50 && marks<55)
    {
        cout<<"Grade C+";
    }
    else if (marks>=55 && marks<60)
    {
        cout<<"Grade B-";
    }
    else if(marks>=60 && marks<65)
    {
        cout<<"Grade B";
    }
    else if (marks>=65 && marks<70)
    {
        cout<<"Grade B+";
    }
    else if(marks>=70 && marks<75)
    {
        cout<<"Grade A-";
    }
    else if (marks>=75 && marks<80)
    {
        cout<<"Grade A";
    }
    else
    {
        cout<<"Grade A+";
    }
    getch();
}