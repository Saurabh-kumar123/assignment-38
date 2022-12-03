#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> L1;
     L1.push_back(12);
     L1.push_back(18);
     L1.push_back(13);
     L1.push_back(62);
     L1.push_back(2);
     list<int>::iterator it;
     for(it=L1.begin();it!=L1.end();it++)
          cout<<*it<<" ";
     cout<<endl;
     cout<<"first element is : "<<L1.front()<<endl;
     cout<<"last element is : "<<L1.back()<<endl;

     return 0;
}

