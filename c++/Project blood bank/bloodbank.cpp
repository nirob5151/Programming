#include <iostream>
#include<bits/stdc++.h>
#include <string>
#include <cstdlib>
using namespace std;

struct Donor                                      // Structure declaration
{
    string name,department,email,bloodType;       // Member (string variable)
    int age;                                      // Member (int variable)
    long long int id;                             // Member (long long int variable)
    long long int number;                         // Member (long long int variable)
    string date;
};

const int MAX_DONORS = 100;
Donor donors[MAX_DONORS];
int numDonors = 0;
void clearScreen() {
    // Clear the screen based on the operating system
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void addDonor()
 {
    if (numDonors < MAX_DONORS) 
    {
        Donor newDonor;
        cout << "Enter donor name: ";
        cin>>newDonor.name;
       // getline(cin,newDonor.name);              //using getline() function
        cout<<endl;
        cout<<"Enter Your Id: ";
        cin>>newDonor.id;
        cout<<"Enter Your Department: ";
        cin>>newDonor.department;
        //getline(cin,newDonor.department);        //using getline() function
        cout << "Enter blood type: ";
        cin >> newDonor.bloodType;
        cout << "Enter donor age: ";
        cin >> newDonor.age;
        cout<<"Enter Last Date Of Donation: ";
        cin>>newDonor.date;
        cout<<"Enter Your Phone No: ";
        cin>>newDonor.number;
        cout<<"Enter Your Email: ";
        cin>>newDonor.email;

        donors[numDonors] = newDonor;
        numDonors++;

        cout << "Donor added successfully!" << endl;
    } else {
        cout << "The blood bank is full. Cannot add more donors." << endl;
    }
}
void displayDonors()
 {
    cout << "Donor List:" << endl;
    for (int i = 0; i < numDonors; i++) 
    {
        cout << "Donor " << i + 1 << ":" << endl;
        cout << "Name: " << donors[i].name << endl;
        cout<<"Student ID: "<<donors[i].id<<endl;
        cout << "Blood Type: " << donors[i].bloodType << endl;
        cout << "Age: " << donors[i].age << endl;
        cout<<"Last Date Of Donation: "<<donors[i].date<<endl;
        cout<<" :-:Contact Info:-:"<<endl;
        cout<<"Phone: "<<donors[i].number<<endl;
        cout<<"Email: "<<donors[i].email<<endl;

        cout << "---------------------" << endl;
    }
}

void searchDonors() 
{
    string searchKey;
    cout << "Enter a blood type to search for: ";
    cin >> searchKey;
    cout << "Search Results:" << endl;
    for (int i = 0; i < numDonors; i++)
     {
        if (donors[i].name == searchKey || donors[i].bloodType == searchKey) 
        {
            cout << "Donor " << i + 1 << ":" << endl;
            cout << "Name: " << donors[i].name << endl;
            cout<<"Student ID: "<<donors[i].id<<endl;
            cout << "Blood Type: " << donors[i].bloodType << endl;
            cout << "Age: " << donors[i].age << endl;
            cout<<"Last Date Of Donation: "<<donors[i].date<<endl;
            cout<<" :-:Contact Info:-:"<<endl;
            cout<<"Phone: "<<donors[i].number<<endl;
            cout<<"Email: "<<donors[i].email<<endl;

            cout << "---------------------" << endl;
        }
    }
}

int main() 
{
    int choice;

    while (true) 
    {

        cout<<"\n\t\t================================================";
        cout<<"\n\t\t|   BUBT Student Blood Bank Management System   |"<<endl;
        cout<<"\t\t=================================================";
        cout<<"\n\t \t \t ::Enter Your Choice::"<<endl;
        cout<<"\n\t\t\tTo Add New Data \t(1)\n\t\t\tTo View List Of Donar   (2)\n\t\t\tTo Search Donar \t(3)\n\t\t\tTo Exit \t\t(4)"<<endl;
        cout<<"\t\t\t: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                addDonor();
                break;
            case 2:
                displayDonors();
                break;
            case 3:
             searchDonors();
                break;
            case 4:
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
