#include<iostream>
#include<bits/stdc++.h>
#include <conio.h>
using namespace std;
int main(void)
{
    struct node
    {
        int deta;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
    head=0;
    int choice=1;
    int count;
    while (choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
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
    temp=head;
    while (temp!=0)
    {
        cout<<"Linked List Is: "<<temp->deta<<endl;
        temp=temp->next;
        count++;

    }
    cout<<"New Node Is: "<<count;
    
   getch(); 
    
}
