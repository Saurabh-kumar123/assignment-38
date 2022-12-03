#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> L1;
     L1.push_back(32);
     L1.push_back(14);
     L1.push_back(12);
     L1.push_back(67);
     list<int> L2;
     L2.push_back(7);
     L2.push_back(99);
     L2.push_back(22);
     L2.push_back(42);
     list<int>::iterator it;
     for(it=L1.begin();it!=L1.end();it++)
     cout<<*it<<"  ";
     cout<<endl;
     for(it=L2.begin();it!=L2.end();it++)
     cout<<*it<<"  ";
     cout<<endl;
     cout<<"after merge "<<endl;
     L1.merge(L2);
     for(it=L1.begin();it!=L1.end();it++)
     cout<<*it<<"  ";
     cout<<endl;
     cout<<endl;
     return 0;
}



