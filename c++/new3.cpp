#include<bits/stdc++.h>
#include<fstream>
using namespace std;
class person
{
    string name;
    char address[1000],blood[1000],department[1000];
    int birth,id_no,mobile_no,intake,section;
    public:
    void containt()
    {
        cout<<"Enter Your Name: ";
        getline(cin,name);
        cout<<"Enter your Address: ";
        cin>>address;
        cout<<"Enter Your Blood Group: ";
        cin>>blood;
        cout<<"Enter Your Id No:" ;
        cin>>id_no;
        cout<<"Enter Your Department: ";
        cin>>department;
        cout<<"Enter Your Intake: ";
        cin>>intake;
        cout<<"Enter Your Section: ";
        cin>>section;
        cout<<"Enter Your Date Of Birth: ";
        cin>>birth;
        cout<<"Enter Your Mobile NO: ";
        cin>>mobile_no;

    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Blood Group : "<<blood<<endl;
        cout<<"Id No : 22235103"<<id_no<<endl;
        cout<<"Department : "<<department<<endl;
        cout<<"Intake : "<<intake<<endl;
        cout<<"Section : "<<section<<endl;
        cout<<"Date Of birth: "<<birth<<endl;
        cout<<"Mobile No: +88"<<mobile_no;
    }
};
int main()
{
    system("color 0");
    person ob;
    ob.containt();
    ob.display();
}