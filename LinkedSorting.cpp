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

//function for Displaying the Linked List
void Link ::displayNode()
{
    NODE *t;

    t=p;

    while(t!=NULL){
        cout<<t->item<<"-->";
        t=t->next;
    }
    cout<<"NULL";
}

//function for Sorting Linked List
void Link::sortNode()
{
    NODE *prev,*n,*temp;

    temp=new NODE;

    prev=p;
    n=prev->next;

    while(prev->next!=NULL)
    {
        while(n!=NULL)
        {
            if(prev->item>n->item)
            {
                temp->item=prev->item;
                prev->item=n->item;
                n->item=temp->item;
                n=n->next;
            }
            else{
                n=n->next;
            }

        }
        prev=prev->next;
        n=prev->next;
        if(n->next==NULL)
        {

        }
    }
}


//Main Function
int main()
{
    Link l;
    l.createNode();
    cout<<"\n\nOriginal Linked List :  ";
    l.displayNode();
    l.sortNode();
    cout<<"\n\nSorted Linked List :  ";
    l.displayNode();
}


