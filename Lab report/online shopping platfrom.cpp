/*Create a classcalled&quot;online_shopping_platform&quot; and create objects for products. 
Each product object should contain information such as name, description, and price. 6.
 Create a class called &quot; Library&quot;.
 Create three book objects which have attributes like title, author, and publication year.*/
#include<bits/stdc++.h>
using namespace std;
class Online_Shopping_Platform
{
    public:
    string name,discription;
    int price;
    void product()
    {
        //cout<<"----------Product You Enter:----------"<<endl;
        cout<<"Enter Name Of Product: ";
        cin>>name;
        cout<<"Enter Product Discription: ";
        cin>>discription;
        cout<<"Enter Product Price: ";
        cin>>price;
        cout<<"Product Name: "<<name<<endl;
        cout<<"Product Discription: "<<discription<<endl;
        cout<<"Product Price: "<<price;   
    }
};
int main()
{
    Online_Shopping_Platform ob;
    ob.product();

}
