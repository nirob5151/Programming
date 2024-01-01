#include<iostream>
using namespace std;
class King
{
    public:
    void king()
   {
     try{
        char num;
        cin>>num;
        if (!isdigit(num))
        {
            throw 1;
        }
        else
        {
            cout<<"You enter number: "<<num<<endl;
        }

    }
    catch(...){
        cout<<"You enter invalid value, Please enter a numeric number"<<endl;
        }
   }
};

int main()
{
    King ob;
    ob.king();
}