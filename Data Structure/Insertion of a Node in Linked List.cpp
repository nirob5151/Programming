#include<iostream>
using namespace std;

    struct node
    {
        int deta;
        struct node *next;
    };
    struct node *head=0,*newnode,*temp;
    void add()
    {
    int choice=1;
    while (choice)
    {
        struct node * newnode=(struct node *)malloc(sizeof(struct node));
        cout<<"Enter your deta: ";
        cin>>newnode->deta;
        newnode->next=0;
        if (head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"Do you want to continue 0 or 1 :";
        cin>>choice;
    }
    }
    void add_newData_beg()                    //add new data at beginning
    {
      struct node *begining;
      cout<<"Enter New Data:";
      cin>>begining->deta;
      begining->next=head;
      head=begining;
    }
     void add_newnode_end()
    {
      struct node *end,*off;
      end=(struct node *)malloc(sizeof(struct node));
      cout<<"Enter New node at end";
      cin>>end->deta;
      end->next=0;
      off=head;
      while (off->next!=0)
      {
        off=off->next;
        
      }
      off->next=end;
      
    }
void print()
{
    int count=0;
    temp=head;
    while (temp!=0)
    {
        cout<<"Linked List Is: "<<temp->deta;
        temp=temp->next;
        count++;
        cout<<endl;
    }
    cout<<"There are "<<count<<" Node"<<endl;
 }
    

int main()
{
    char choice;
    while (true) 
    {
        cout << "::Enter Your Choice::" << endl;
        cout<<" Add  Data \t\t\t(1)"<<endl;
        cout<<" View  Data \t\t\t(2)"<<endl;
        cout<<" Insest New Data at Beginning\t(3)"<<endl;
        cout<<" Add  Data \t\t\t(4)"<<endl;
        cout<<" EXIT \t\t\t\t(6)"<<endl;
        cout << "Enter Choice Here: ";
        cin >> choice;
        switch (choice) 
        {
                case '1':
                system("cls");
                    add();
                    break;
                case '2':
                system("cls");
                    print();
                    break;
                case '3':
                    add_newData_beg();
                    break;
               case '4':
                    system("cls");
                    add_newnode_end();
                    break;
                /*case '5':
                    system("cls");
                    deleteDonor();
                    break;*/ 
                case '6':
                    cout << "\n\t\t\t Thank You For Visiting Us!" << endl;
                    return 0;
                default:
                
                    cout << "\t\t\t Invalid choice. Please try again." << endl;
    }
    }
    return 0;
}
