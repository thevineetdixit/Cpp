#include<iostream>
using namespace std;

class Maxheap
{
    int *arr;
    int size; // total elemets in heap
    int total_size; // total size of array

    public:

    Maxheap(int n)
    {
        arr = new int [n];
        size =0;
        total_size = n;

    }

    //insert in the heap
    void insert(int value)
    {
       //if eap size is available or not
       if(size==total_size)
       {
        cout<<"Heap overflow\n"; 
        return ;
       }
        
       
        arr[size]=value;
        int index = size;
        size++;

        // compre it with its parents
        while(index>0 && arr[(index-1)/2]<arr[index])
        {
            swap(arr[index],arr[(index-1)/2]);
            index = (index-1)/2;
        };

        cout<<arr[index]<<" is inserted into the heap\n";

    }

    void print()
    {
        for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";

        cout<<endl;
    }

    void heapify(int index)
    {
        int largest=index;
        int left = 2*index+1;
        int right= 2*index+2;

        //largest will store the index of element which is greater between left or child child

        if(left<size && arr[left]>largest)
        largest = [left];
        if(right<size && arr[right]>largest)
        largest = [right];

    if(largest!= index)
    {
        swap(arr[index],arr[largest]);
        heapify(largest);
    }
    }
    void delete()
    {
        if(size==0)
        {
            cout<<"heap underflow\n";
            return;
        }

        cout<<arr[0]<<"deleted from the heap";
        arr[0]=arr[size-1];
        size--;
        if(size==0)
        return ;
        heapify(0);
    }

};


int main()
{
       Maxheap h1(6);
       h1.insert(4);
       h1.insert(14);

       h1.print();
}