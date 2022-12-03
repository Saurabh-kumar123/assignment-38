#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<char> L1;

    for(char i='A';i<='Z';i++)
          L1.push_back(i);
          list<char>::const_iterator it;
    for(it=L1.begin();it!=L1.end();it++)
       cout<<*it<<" ";
    cout<<endl;
     return 0;
}



