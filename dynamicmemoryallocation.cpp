#include<iostream>

using namespace std;

int main()
{
    //variable ke lie heap memeory allocate karo
    int *ptr = new int ;
    *ptr = 5;  // value assign
    cout<<*ptr<<endl;

    float *ptr2 = new float;
    *ptr2 = 3.6;
    cout<<*ptr2<<endl;

    int n ;
    cout<<"enter the size of the array";

    cin>>n;

    int *p = new int [n];

    // value daalo
    for(int i =0;i<n;i++)
    p[i]=i+1;

    //print karado
    for(int i=0;i<n;i++)
    cout<<p[i]<<endl;

    // delete keyword ka use krna

    delete ptr;
    delete ptr2;
    delete[] p;




}