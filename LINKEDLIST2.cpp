// Insertion of a Node  at the end



#include<iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next = NULL;
    }

};

int main()
{
    Node * Head,*Tail;
    Head = NULL;

    
    int arr[] = {2,4,6,8,10};
    // insert the value at the end

    // Linked list is empty
    for(int i=0;i<5;i++)
   {
     // linked list is empty
    if(Head==NULL)
    {
       Head = new Node(arr[i]);
       Tail = Head;
    }
    //Liked list exist
    else
    {
        Tail->next = new Node(arr[i]);
        Tail = Tail->next;
    }
   }

   // Print the linked list  
   Node * temp;
   temp =Head;

   while(temp)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }

   
}