
//virtual function :
// jab class aur child me same function ho aur p = new child then always parent ka hi call hoga
// explicitely child ke function ko call krne ke liye aap ko parent ke funciton me virtual lagana padega

#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    virtual void speak()
    {
        cout<<"huhu\n";
    }

};

class Dog : public Animal
{
    public:
    void speak()
    {
        cout<<"Bark\n";
    }
};

class Cat : public Animal
{
    public:
    void speak()
    {
        cout<<"Meeeaauuu\n";
    }
};

int main()
{
    // Animal *p;
    // p = new Dog();
    // p->speak();

    vector<Animal*> animals = {
    new Dog(),
    new Cat(),
    new Animal(),
    new Dog(),
    new Cat()
};

Animal* p;

for(int i = 0;i<animals.size();i++)
{
    p = animals[i];
    p->speak(
        
    );
}


    return 0;
}
