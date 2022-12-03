#include<iostream>
#include<list>
#include<iterator>
#include<string>
using namespace std;
void display(list<string> k)
     {
          list<string>::iterator it;
          for(it=k.begin();it!=k.end();it++)
               cout<<*it<<"  ";
          cout<<endl;
     }
int main()
{
     list<string> L1;
     string str;
     while(true)
     {
          cout<<"Enter a string : ";
          getline(cin,str);
          if(str=="exit"||str=="EXIT")
               break;
          L1.push_back(str);
     }
     display(L1);
     return 0;
}
