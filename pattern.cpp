#include<iostream>
using namespace std;
int main(){
    int row,col;
//row ki jagah col krdo tab bhi same result aayega 
    for (col=0;col<5;col=col+1)
    {
       for (row=0;row<=col;row=row+1)
        {cout<<"* ";}

    cout<<endl;    
    }
    return 0;

}