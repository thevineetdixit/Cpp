#include<iostream>
using namespace std;

// Implementing it with an array
class Stack
{
    int * arr;
    int size;
    int top;

    public:

    //Constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int (s);
    }

    //Push
    void push(int value)
    {
        if(top==size-1)
        {
            cout<<"Stack Overflow\n";
            return;
        }
        else
        {
            top++;
            arr[top]=value;
            cout<<"Pushed "<<value<<" into the stack\n";
        }
    }

    //Pop
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow\n";            
        }
        else
        {
            top--;
            cout<<"Poped out "<<arr[top+1]<<"from the stack\n";
        }

    }

    //Peak
    int peak()
    {
        if(top==-1)
        {
            cout<<"Stack is empty\n";
            return -1;            
        }
        else
        {
         return arr[top];
        }

    }

    // Isempty
    bool Isempty()
    {
        return top==-1; // ye directly return krdega ki wo mpty h ya nahi
    }

    //size
    int issize()
    {
        return top+1; // top wala jo pointer h wo last wale element ka index store krega
    }



};


int main()
{
    Stack S(5);
    S.push(5);
    S.push(6);
    S.push(8);
    S.pop();
}


