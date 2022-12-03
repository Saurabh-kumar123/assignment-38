#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> L1;
     list<int> L2;
     L1.push_back(32);
     L1.push_back(14);
     L1.push_back(12);
     L1.push_back(12);
     L1.push_back(32);
     L1.push_back(14);
     L1.push_back(12);
     L1.push_back(12);
     list<int>::iterator it;
     for(it=L1.begin();it!=L1.end();it++)
     cout<<*it<<"  ";
     cout<<endl;
     L2.assign(L1.begin(),L1.end());
     for(it=L2.begin();it!=L2.end();it++)
     cout<<*it<<"  ";
     cout<<endl;
     cout<<endl;
     return 0;
}


