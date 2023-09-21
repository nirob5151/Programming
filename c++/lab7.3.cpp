#include<bits/stdc++.h>
using namespace std;
class person
{
    char name[100],address[100],blood[100];
    int birth,id_no;
    public:
    void containt()
    {
        cout<<"Enter Your Name: ";
        cin>>name;
        cout<<"Enter your Address: ";
        cin>>address;
        cout<<"Enter Your Blood Group: ";
        cin>>blood;
        cout<<"Enter Your Id No:" ;
        cin>>id_no;
        cout<<"Enter Your Date Of Birth: ";
        cin>>birth;

    }
    void display()
    {
        cout<<"Name Is: "<<name<<endl;
        cout<<"Address is: "<<address<<endl;
        cout<<"Blood Group Is: "<<blood<<endl;
        cout<<"Id No Is: "<<id_no<<endl;
        cout<<"Date Of birth: "<<birth<<endl;
    }
};
int main()
{
    person ob;
    ob.containt();
    ob.display();
}