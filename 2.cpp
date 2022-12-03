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
     L1.assign(4,100);
     display(L1);
     list<int> L2;
     L2.assign(L1.begin(),L1.end());    //assign all element..
          display(L2);
     int arr[]={10,20,30,40};
     L2.assign(arr,arr+4);              // assign by array..
     display(L2);
     cout<<endl;
     return 0;
}
