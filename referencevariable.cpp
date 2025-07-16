#include<iostream>

using namespace std;

void swapping(int&p1,int &p2) // passs by reference 
{
    int temp = p1;
    p1=p2;
    p2=temp;
    
}


int main()
{
    //reference variable
    // int num =10;
    // int &temp = num;
    //cout<<temo<<endl;

    //temp++;
    //cout<<num<<endl;
    //cout<<&temp<<endl;
    //cout<<&num<<endl;

    int first = 10, second=20;

    swapping(first,second);
    cout<<first<<" "<<second;


}
