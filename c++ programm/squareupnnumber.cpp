#include<iostream>
using namespace std;
class base{
       protected:
       int n;
       public:
       void setn()
       {
            cout<<"enter n:";
            cin>>n;
       }
};
class derived:public base{
      int i;
      public:
      void getn()
      {
          for(i=1;i<=n;++i)
          {
              cout<<"square of num is"<<i<<" :"<<i*i<<endl;
          }
      }
};
int main()
{
      derived d;
      d.setn();
      d.getn();
}