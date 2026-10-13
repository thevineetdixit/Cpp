//what is inheritance 
// the capability of a class to derive property and characterstics from another class;

/*

            EXTERNAL CODE                           WITHIN CLASS                        DERIVED CLASS
PUBLIC :    YES                                     YES                                     YES

PRIVATE :   NO                                      YES                                     NO

PROTECTED : NO                                      YES                                     YES
*/

#include <bits/stdc++.h>
using namespace std;

class Human 
{
    private :
    int a;
    protected:
    int b;
    void print()
    {
        a = 10,b=20,c=30;
        cout<<a<<b<<c;
    }
    public:
    int c;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Human vineet ;

    //when we derive the class and mark the data from parent ,then the higher security becomes valid for the child class,for ex if a parent class variable is protected and in the child we mark it as private then private is higher security and it becomes private

    return 0;
}