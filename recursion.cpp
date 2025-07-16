#include<iostream>
using namespace std;

void fun(int n)
{
    //base case
    if(n==0)
    {
        cout<<"happy birthday\n";
        return;
    }
    cout<<n<<" days left for birthday\n";
    fun(n-1);    

}



int main()
{
  int n =5;
  ////iterative approach

  //for(int i =n;i>0;i--)
  //{
  //    cout<<i<<" days left for the birthday\n";
  //}

  //cout<<"happy birthday\n";

  fun(n);
}