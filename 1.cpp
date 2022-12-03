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
     list<int> L2;
     list<int> L3;
                              // assign value...
     L1.push_back(12);
     L1.push_back(18);
     L1.push_back(13);
     L1.push_back(62);
     L1.push_back(2);
     // print value..
     list<int>::iterator x;
      display(L2);
     L2.assign(5,100);        // assign value..
      display(L2);
      L2.merge(L1);
      display(L2);            // merge value
    L2.sort();                // sort value
     display(L2);
     L2.remove(100);          // remove value..
      display(L2);
          x=L2.begin();
    L2.insert(x,100);                      // insert value..
    L2.insert(x,102);
    L2.insert(L2.begin(),100);
    L2.insert(L2.end(),102);
    L2.insert(L2.begin(),100);
    L2.insert(L2.end(),102);
    cout<<"\nunique "<<endl;
     display(L2);
          L2.unique();                       // unique value.. print..
     display(L2);
 cout<<"size of list : "<<L2.size()<<endl;
  L2.reverse();                             // reverse value...
   display(L2);
    cout<<"front element : "<<L2.front()<<endl;
   L2.pop_back();                           // pop back
  for(x=L2.begin();x!=L2.end();x++)
          cout<<*x<<" ";
          cout<<endl;
  display(L2);
   list<int>::reverse_iterator ite;        //reverse_iterator...
   for(ite= L2.rbegin();ite!=L2.rend();ite++)
     cout<<*ite<<" ";
     cout<<endl;
     display(L2);
     cout<<"erase 4th number "<<endl;
     x=L2.begin();
     x++;
     x++;
     x++;
     L2.erase(x);                            // erase value..
     display(L2);
     L3.assign(L2.begin(),L2.end());        // assign value..
     display(L3);
   cout<<endl;
     return 0;
}
