#include<iostream>

using namespace std;

int main()
{        // **** char array ka description
// ye letter by letter aur size defined ho ya na ho tab bhi le skti h
 //  char arr[]={'a','b','c','d','e'};

 //  cout<<arr;
 // for(int i=0;i<5;i++)
 // cout<<arr[i];

 // char arr[20];
 // cout<<"enter a string";
 // cin>>arr;
 // arr[3]='\0';


 // cout<<arr; 


string s="Vineet is king";

cout<<s<<endl;

// look at here on the output
//take input as vineet dixit
string b;
cin>>b;
cout<<b;
string s1="vineet",s2="dixit";
string s3=s1+s2;
s3=s1.append(s2);
cout<<s3; 
string s4="vineet dixit is a \"good\"boy";
cout<<s4;
}