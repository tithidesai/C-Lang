#include<iostream>
using namespace std;
class box
{
      int x,y;
      public:
      void input()
      {
            cout<<"enter A:";
            cin>>x;
            cout<<"enter B:";
            cin>>y;
      }
      friend void find(box t);
};
void find(box t)
{
      if(t.x>t.y)
      {
              cout<<"big number is A:"<<t.x<<endl;
      }
      else
      {
               cout<<"big number is B:"<<t.y<<endl;
      }
}
int main()
{
       box c;
       c.input();
       find(c);
}    
      

