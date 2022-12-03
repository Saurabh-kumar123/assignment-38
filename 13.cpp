#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<char> L1;

    for(char i='A';i<='Z';i++)
          L1.push_back(i);
    for(char i : L1)
       cout<<i<<" ";
    cout<<endl;
     return 0;
}


