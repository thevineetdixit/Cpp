#include<iostream>
using namespace std;

//Implenment queue using array
class Queue
{
    int *arr;
    int front,rear,size;

    public:

    //contructor
    Queue(int n)
    {
        arr=new int[n];
        size = n;
        front = rear=-1;
    }
    //emptyfuntcion
    bool IsEmpty()
    {
        return front==-1;
    }

    //queue is full or not
    bool IsFull()
    {
        return rear=size-1;
    }

    //Push element int queue fromend

    void push(int x)
    {
        if(IsEmpty())
        {
            cout<<"Pushed"<< x<< "into the array\n";
            front = rear =0;
            arr[0]=x;
        }
        else if(IsFull())
        {
            cout<<"Queue overflow\n";
            return ;
        }

        //insert
        else
        {
            cout<<"Pushed"<< x<< "into the array\n";

            rear+=1;
            arr[rear]=x;
        }
 
    }
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue underflow\n";
            return;
        }
        else
        {
            if(front==rear)
            {
                front = rear=-1;
            }
            else
            {
                front+=1;
            }

        }
    }

};

int main()
{
    Queue q(5);
    q.push(5);
    q.push(15);
    q.push(51);

}