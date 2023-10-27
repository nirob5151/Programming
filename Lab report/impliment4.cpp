/*: Write a C++ Program To Calculate the Electricity Bill Of a Person using Class.
* To Calculate the Electricity Bill Of a Person using Class, first,
 we have to create and call the get( ) function to take input details of the customer.
* After get( ) we create and call a new function i.e. calc_bill( ) to calculate the
 total bill of the customer on behalf of units consumed by the customer.
*At last, we call the put( ) function to print or display a customer or person's electricity bill on the screen.
*Between 0 – 100 Units, price of 5 taka per unit
* Between 101 – 200 Unit, price 7 taka per unit
*Between 201 – N Unit, price 9 taka per unit
*/
#include<bits/stdc++.h>
using namespace std;
class Electricity
{
    string name;
    int unit;
    public:
    void get()
    {
        cout<<"Enter Your Name: ";
        cin>>name;
        cout<<"Enter Your Unit: ";
        cin>>unit;
    }
    void set()
    {
        if (unit<=100 && unit>0)
        {
            cout<<"Unit Price Is: "<<unit*5 ;
        }
        else if (unit<=200 && unit>100)
        {
            cout<<"Unit Price Is: "<<unit*7;
        }
        else if (unit>200)
        {
            cout<<"unite price is :"<<unit*9;
        }
    }
};
int main()
{
    Electricity ob;
    ob.get();
    ob.set();
    
}