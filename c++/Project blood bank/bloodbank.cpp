#include<iostream>
#include<string>
using namespace std;
class name
{

};
int main()
{
    Data_base db;
    while(1)
    {
        int n;
        cout<<"\n\t\t===========================================";
        cout<<"\n\t\t|   Simple Blood Bank Management System   |"<<endl;
        cout<<"\t\t===========================================";
        cout<<"\n\t \t \t ::Enter Your Choice::"<<endl;
        cout<<"\n\t\t\tTo Add New Data \t(1)\n\t\t\tTo View List Of Donar   (2)\n\t\t\tTo Search Donar \t(3)\n\t\t\tTo Exit \t\t(4)"<<endl;
        cout<<"\t\t\t: ";
        cin>>n;
        switch (n)
        {

        case 1:
        {
            system("cls");
            db.Data("Add New");
        }
        break;

        case 2:
        {
            system("cls");
            db.Data("View");
        }
        break;
        case 3:
        {
            system("cls");
            db.Data("Search");
        }
        break;
        case 4:
        {
        	cout<<"\n\nBrought To You By code-projects.org";
            return 0;
        }
        break;

        default:
        {
            system("cls");
            cout<<"\a\aPlease Enter your choice Correctly:\a\a"<<endl;
        }
        break;
        }

    }
    return 0;
}

