#include<iostream>
#include<iomanip>
using namespace std;
class result{
         int maths,sci,eng,tot; 
         double per;
         public:
         void setter(){
               cout<<"enter maths marks:";
               cin>>maths;
               cout<<"enter science marks:";
               cin>>sci;
               cout<<"enter english marks:";
               cin>>eng;
               cal();
         }
         void cal(){
               tot=maths+sci+eng;
               per=(double)tot/3;
         }
         void getter(){
            cout<<"\n";
            cout<<"maths:"<<maths<<endl;
            cout<<"science:"<<sci<<endl;
            cout<<"english:"<<eng<<endl;
            cout<<"total:"<<tot<<endl;
            cout<<"percentage:"<<setprecision(4)<<per<<endl;
         }
};
int main(){
      result n;
      n.setter();
      n.getter();
}