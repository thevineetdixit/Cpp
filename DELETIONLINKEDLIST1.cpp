// deletion of a linked list


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

Node* createlinkedlist(int arr[],int index, int size)
{
    //Base case
    if(index==size)
    return NULL;

    Node* temp;
    temp= new Node(arr[index]);
    temp->next= createlinkedlist(arr,index+1,size);
    return temp;
}

int main()
{
    Node*head;
    head = NULL;

    int arr[]= {2,4,6,8,10};

    head = createlinkedlist(arr,0,5);

   // deletionof a node at start

  // if(head!=NULL)
 //  {
//    Node*temp=head;
//    head = head->next;
//    delete temp;
//   }


// deletion of a node at end 

if(head!=NULL)
{
    //only one node is present
    if(head->next ==NULL)
    {
        Node*temp = head;
        delete temp;
        head = NULL;
    }

    // More than 1 node is present 

    else
    {
        Node*curr = head;
        Node*prev = NULL;

        //curr->next not equal to null

        while(curr->next!=NULL)
        {
            prev = curr;
            curr= curr->next;
        }

        prev->next = curr->next;
        delete curr;
    }


}


    // Print the values
    
    

    while(head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }


}