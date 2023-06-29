#include<iostream>
using namespace std;
class report
{
      int adno,marks[5],tot=0,i;
      char name[20];
      float avg;
      float Giv_avg(){
          avg=tot/5;
      }
      public:
      void Readinfo(){
           cout<<"enter add no.:";
           cin>>adno;
           cout<<"enter name:";
           cin>>name;
           for(i=0;i<5;i++){
               switch(i){
                   case 0:
                   cout<<"enter english marks:";
                   break;
                   case 1:  
                   cout<<"enter science marks:";
                   break;
                   case 2:
                   cout<<"enter maths marks:";
                   break;
                   case 3:
                   cout<<"enter gujarati marks:";
                   break;
                   case 4:
                   cout<<"enter hindi marks:";
                   break;
                   
               }
               cin>>marks[i];
               tot=tot+marks[i];
           }
           Giv_avg();
      }
      void displayinfo(){
           cout<<"\n";
           cout<<"admin no:"<<adno<<endl;
           cout<<"admin name:"<<name<<endl;
           for(i=0;i<5;i++){
               switch(i){
                       case 0:
                       cout<<"english:"<<marks[0]<<endl;
                       break;
                       case 1:
                       cout<<"science:"<<marks[1]<<endl;
                       break; 
                       case 2:
                       cout<<"maths:"<<marks[2]<<endl;
                       break; 
                       case 3:
                       cout<<"gujarati:"<<marks[3]<<endl;
                       break; 
                       case 4:
                       cout<<"hindi:"<<marks[4]<<endl;
                       break; 
               }
           }
           cout<<"total marks:"<<tot<<endl;
           cout<<"your average marks is:"<<avg;
      }
};
int main(){
        report r;
        r.Readinfo();
        r.displayinfo();
}