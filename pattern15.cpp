#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5-row;col++)
        cout<<"   ";

        //alphabet print
        for(char name='A';name<='A'+(row-1);name=name+1)
        cout<<name<<"  ";

        cout<<endl;
    }
    return 0;



}