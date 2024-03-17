#include<iostream>
using namespace std;

//defining the structure of node
struct node
{
    int item;
    struct node *next;
};
typedef struct node NODE;

class Link
{
    NODE *p;

    public:
        void createNode();
        void displayNode();
        void sortNode();
};

//function for creating linked list
void Link :: createNode()
{
    NODE *prev,*q;
    int i,n;

    cout<<"\nEnter the of Node in a Linked List : ";
    cin>>n;

    p=new NODE;
    cout<<"\nEnter the Data of Node no. 1 : ";
    cin>>p->item;
    p->next=NULL;

    prev=p;

    for(i=1;i<n;i++)
    {
        q=new NODE;

        cout<<"\nEnter the Data of Node no. "<<i+1<<" : ";
        cin>>q->item;
        q->next=NULL;
        prev->next=q;
        prev=q;
    }
}

