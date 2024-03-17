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
