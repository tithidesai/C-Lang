#include<iostream>
using namespace std;
class base{
      protected:
      int n;
      public:
      void setn(){
          cout<<"enter n:";
          cin>>n;
      }
};
class cal : public base{
      protected:
      int x=1;
};
class output : public cal{
       public:
       void getn(){
           for(;x<=10;x++){
                cout<<n<<" * "<<x<<" = "<<n*x<<endl;
           }
       }
};
int main()
{
      output tab;
      tab.setn();
      tab.getn(); 
}