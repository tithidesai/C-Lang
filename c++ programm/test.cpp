#include<iostream>
using namespace std;
class test
{
          private:
          int testcode,nocandidates;
          string description;
          int calcntr()
          {
                   return(nocandidates/100+1);  
          }
          public:
          void schedule()
          {
                cout<<"enter test code:";
                cin>>testcode;
                cout<<"enter description:";
                cin>>description;
                cout<<"enter noncandidates:";
                cin>>nocandidates;
                calcntr();
          }
          void disptest()
          {
                cout<<"testcode:"<<testcode<<endl;
                cout<<"discription:"<<description<<endl;
                cout<<"noncandidates:"<<nocandidates<<endl;
                cout<<"no of centers:"<<calcntr()<<endl;
          }                
};
int main(){
    test t;
    t.schedule();
    t.disptest();
}
