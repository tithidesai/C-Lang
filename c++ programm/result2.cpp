#include<iostream>
using namespace std;
class student{
      int admno;
      char sname[20];
      float eng,sci,maths,total;
      float ctotal(){
             return eng+sci+maths;
      }
      public:
      void takedata(){
             cout<<"enter admin no:";
             cin>>admno;
             cout<<"enter name:";
             cin>>sname;
             cout<<"enter maths marks:";
             cin>>maths;
             cout<<"enter science marks:";
             cin>>sci;
             cout<<"enter english marks:";
             cin>>eng;
             total=ctotal();
      }
      void showdata(){
          cout<<"admin no:"<<admno<<endl;
          cout<<"name:"<<sname<<endl;
          cout<<"maths marks:"<<maths<<endl;
          cout<<"science marks:"<<sci<<endl;
          cout<<"english marks:"<<eng<<endl;
          cout<<"total marks:"<<total<<endl;
      }
};
int main()
{
     student s;
     s.takedata();
     s.showdata();
}