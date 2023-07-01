#include<iostream>
using namespace std;
class Result
{
        int rno,maths,sci,eng,total;
        char name[20];
        float per; 
        public:
        Result(){
                cout<<"enter roll no:";
                cin>>rno;
                cout<<"enter name:";
                cin>>name;
                cout<<"enter maths marks:";
                cin>>maths;
                cout<<"enter science marks:";
                cin>>sci;
                cout<<"enter english marks:";
                cin>>eng;

                calcul();
        }
        void calcul(){
               total=maths+sci+eng;
               per=(float)total/3;

               disp();
        }
        void disp(){
                cout<<"\n";
                cout<<"roll no is:"<<rno<<endl;
                cout<<"name is:"<<name<<endl;
                cout<<"maths marks is :"<<maths<<endl;
                cout<<"science marks is:"<<sci<<endl;
                cout<<"english marks is:"<<eng<<endl; 
                cout<<"total marks is:"<<total<<endl;
                cout<<"your percentage is:"<<per<<endl;
  
        } 
};
int main()
{
    Result r;
}