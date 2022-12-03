#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void display(list<int> k)
     {
          list<int>::iterator it;
          for(it=k.begin();it!=k.end();it++)
               cout<<*it<<"  ";
          cout<<endl;
     }
int main()
{
     list<int> L1;
     L1.push_back(12);
     L1.push_back(18);
     L1.push_back(13);
     L1.push_back(62);
     L1.push_back(2);
     display(L1);
     return 0;
}
