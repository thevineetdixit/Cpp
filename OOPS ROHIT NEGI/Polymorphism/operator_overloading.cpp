//operator overlaoding 
// same as like in overloading,a same function shows multiple works here 
// same operator shows multiple functionality,like a + can add two no but it can also add two strings 

// we will write a program to add two Complex no that a+i b where i = iota 

#include <bits/stdc++.h>
using namespace std;

class Complex 
{
    int real,img;
    
    public:
    Complex(int real,int img)
    {
        this->real = real;
        this->img = img;
    };

    void display ()
    {
        cout<<real<<" +i"<<img;
    }

    Complex operator +(Complex &C)
    {
        Complex ans(real + C.real, img + C.img);
        return ans;
    }
};

int main() {

    Complex a(3,2);
    Complex b(4,3);
    
    Complex c = a + b;
    c.display();
    

    return 0;
}