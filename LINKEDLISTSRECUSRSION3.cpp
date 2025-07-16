// insert a node at any position mainky in between 

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

    //insert node at a particular position

    int x = 3;// insert position 
    int value = 30;

    Node*temp = head;
    x--;

    while(x--)
    {
        temp = temp->next;
    };

    Node*temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;


    // Print the values
    
    temp = head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp ->next;
    }


}