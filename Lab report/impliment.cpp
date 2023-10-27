/*Write a C++ program to implement a class called Date that has private member variables for day, month, and year.
 Include member functions to set and get these variables, as well as to validate if the date is valid.*/

#include<bits/stdc++.h>
using namespace std;
class Data
{
    private:
    long long int day,month,year;
    public:
    void set_data()
    {
        cout<<"Enter Day Month and Year: ";
        cin>>day>>month>>year;
    }
    void get_data()
    {
            if(1>=day||day>=31)
            {
                cout<<"Date Not In Calander";
            }
            else if(1>=month||month>13)
            {
                cout<<"Month Is Not In calander";
            }
            else if(year<0)
           {
                cout<<"Year is not in Calender";
           }
            else
            cout<<"Date is: "<<day<<"/"<<month<<"/"<<year;
    }

};
int main()
{
    Data ob;
    ob.set_data();
    ob.get_data();
    return 0;
}

