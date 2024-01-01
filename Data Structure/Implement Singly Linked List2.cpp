#include<iostream>
using namespace std;

    struct node
    {
        int deta;
        struct node *next;
    };
    struct node *head=0,*newnode,*temp;
    int choice=1;
    void add()
    {
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
void print()
{
    temp=head;
    while (temp!=0)
    {
        cout<<temp->deta;
        temp=temp->next;
    }
 }
    

int main()
{
    add();
    cout<<"Linked List Is: ";
    print();
    return 0;
}
