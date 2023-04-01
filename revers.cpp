#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head=nullptr;
void insertnode (int value)
{
    node *newnode, *last;
    newnode = new node;
    newnode->data = value;
    last = head;
    if (head == nullptr) head = newnode;
    else
    {
        while (last->next != nullptr)
        {
            last = last->next;
        }
        last->next = newnode;
        newnode ->next= nullptr;
    }
}
void revers ()
{
    node *last , *other, *head2, *current;
    other = head;
    head2= head;
    while (other ->next != nullptr)
    other = other-> next;
    head = other;
    while (head2 ->next!= nullptr)
    {
    last = head2;
    current = head2;
    while (current ->next != other)
    current = current ->next;
    /*while (last ->next != current)
    last = last ->next;*/
    other ->next = current;
    current -> next = nullptr;
    other = current;
    } 
} 

void display ()
{
    node *current; 
    int i=0;
    if (head == nullptr)
    cout<<"your linkedlist is empty";
    current = head;
    while (current ->next != nullptr)
    {i++;
        current = current ->next;
    }
    current = head;
    while (i!=-1)
    {
        cout<<current->data<<"\t";
        current = current -> next;
        i--;
    }
}
int main ()
{
    insertnode (0);insertnode (1);
    display() ;
    revers ();
    cout<<endl;
    display ();
}