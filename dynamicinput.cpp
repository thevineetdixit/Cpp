// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int num;
//     vector<int>v;
    
//     cout<<"enter the numbers";
//     while(1)
//     {
//         if (cin.peek() == '\n')  // if next character is newline
//             break;
//         cin>>num;
//         v.push_back(num);
//     }

//     int n = v .size();

//     for(int i=0;i<n;i++)
//     {
//         cout<<v[i];
//     }
// }

#include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int main() {
//     vector<string> lines;
//     string input;

//     cout << "Enter lines of text (press Enter on empty line to stop):" << endl;

//     while (true) {
//         getline(cin, input);
//         if (input.empty())
//             break;
//         lines.push_back(input);
//     }

//     cout << "\nYou entered:" << endl;
//     for (string line : lines) {
//         cout << line << endl;
//     }

//     return 0;
// }

using namespace std;

int main()
{
    string s;
    getline(cin,s);

    cout<<s;

    return 0;
}
