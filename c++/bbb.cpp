#include<iostream>
using namespace std;
class Regestation
{

 string name[100];
int max_course;
public:
    void choose_course()
    {
        int i;
        cout<<"Enter Max Course 3 to 6: ";
        cin>>max_course;
        for ( i = 1; i <= max_course; i++)
        {
            cout<<"Enter "<<i <<" Course Name :";
            cin>>name[i];
        }
    }
        void print_course()
        {
            int i;
            cout<<"Your Select Course: \n";
            for ( i = 1; i <= max_course; i++)
            {
                cout<<name[i]<<endl;
            }
            
        }
         
};
int main()
{
    Regestation ob;
    ob.choose_course();
    ob.print_course();
}