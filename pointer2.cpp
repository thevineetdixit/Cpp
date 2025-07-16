#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};

   int * ptr = arr;

    // print the address of all the values of first element or 0 index 
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    //print the address of arr[1] or 1 index or second element 

    cout<<&arr[1]<<endl;
    cout<<arr+1<<endl;


    // prin the value
    cout<<arr[0]<<endl;
    cout<<0[arr]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;


    //saare addreess ko print krdo
    for(int i=0;i<5;i++)
    {
        cout<<arr+i<<endl;
        
    }

    // print all the values 
    for(int i=0;i<5;i++)
    {
        cout<<*(arr+i)<<endl;
    }

    // print all the values 
    for(int i =0;i<5;i++)
    cout<<ptr[i]<<" ";

    //print all the address
    for(int i=0;i<5;i++)
    cout<<ptr+i<<endl;

    // arithmatic operation ptr++.ptr--,ptr=ptr+1

    //for(int i =0;i<5;i++)
    //{
    //    cout<<*ptr<<" ";
    //    ptr++;
    //}

    // use of ptr--

    int *ptr5=arr+4;

    for(int i=5;i>0;i--)
    {
        cout<<*ptr5<<" ";
        ptr5--;
    }

    













}