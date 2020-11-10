#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int marks;
};
class result:public student
{
public:
   void set()
    {
        cout<<"Enter the roll: ";
        cin>>roll;
         cout<<"Enter the Marks: ";

        cin>>marks;
    }
   void print()
    {
        cout<<roll<<"         "<<marks<<endl;
    }
};
int main()
{
    result ob;
    ob.set();
    ob.print();
    return 0;
}
