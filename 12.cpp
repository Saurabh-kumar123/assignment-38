#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> L1;
     int ar[]={4,6,5,1,2,9,8};
     L1.assign(ar,ar+7);
     list<int>::iterator it;
     for(it=L1.begin();it!=L1.end();it++)
          cout<<*it<<" ";
     cout<<endl;
     return 0;
}
