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
    Node* Head;
    Head = NULL;
    int arr[] = {2,3,4,6,8};
    int index=0;

    Head = createlinkedlist(arr,index,5);

    //prin the value
    Node * temp;
    temp = Head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}