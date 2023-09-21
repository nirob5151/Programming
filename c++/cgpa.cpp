#include <iostream>
using namespace std;

class CSE
{
    string Name, ID;
    double CGPA;

    public:

    void function_set()
    {
        cin >> Name >> ID >> CGPA;
    }
    void function_show()
    {
        cout <<"Student Name: "<< Name << endl ;
        cout<<"Your Id : " <<ID << endl;
        cout << "Your CGPA: "<<CGPA << endl;
    }
};
int main()
{
    int n,i;
    cout << "Enter Object Limitation: ";
    cin >> n;
    CSE cesfabrigas[10]; //This shows the limiter for object creation
    //CSE cesfabrigas[n];
    for(i=1; i<=n; i++)
    {
    cesfabrigas[i].function_set();
    }
     for(i=1; i<=n; i++)
    {
    cesfabrigas[i].function_show();
    }
    return 0;
}