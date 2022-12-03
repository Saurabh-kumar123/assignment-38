#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> L1;
     L1.insert(L1.begin(),12);
     L1.insert(L1.end(),02);
     L1.insert(L1.begin(),72);
     L1.insert(L1.end(),32);
     L1.insert(L1.begin(),14);
     list<int>::iterator it;
     for(it=L1.begin();it!=L1.end();it++)
          cout<<*it<<" ";
     cout<<endl;
     return 0;
}
