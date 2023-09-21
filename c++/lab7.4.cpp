#include<bits/stdc++.h>
using namespace std;
class card
{
    char titel[100],author[100];
    int number_of_book;
    public:
    void store()
    {
        cout<<"Enter Book Titel: ";
        cin>>titel;
        cout<<"Enter Author Name: ";
        cin>>author;
        cout<<"Enter Number OF Books on Hand: ";
        cin>>number_of_book;
    }
    void display()
    {
        cout<<"Titel: "<<titel<<endl;
        cout<<"Author Name: "<<author<<endl;
        cout<<"Number of Books on Hand: "<<number_of_book<<endl;
    }
};
int main()
{
    card ob;
    ob.store();
    ob.display();
}