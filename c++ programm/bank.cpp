#include<iostream>
using namespace std;
class bank{
      int depo,with,balance=0;
      public:
      int deposite(){
          cout<<"enter amount:";
          cin>>depo;
          balance=balance+depo;
          //return balance;
      }
      int withdrowl(){
            cout<<"enter amount:";
            cin>>with;
            balance=balance-with;
            //return balance;
      }
      int view_bal(){
             cout<<"youe balance is :"<<balance<<endl;
      }
};
int main(){
       int ch;
       bank b;
       cout<<"press 1 for deposite amount"<<endl;
       cout<<"press 2 for withdrowl amount"<<endl;
       cout<<"press 3 for display your balance"<<endl;
       cout<<"press 0 for exit";
       cout<<"\n\n";
       do{
          cout<<"choice your transaction:";
       cin>>ch;

       switch(ch){
           case 1:
             b.deposite();
             break;
           case 2:
              b.withdrowl();
              break;
           case 3:
               b.view_bal();
               break;
           case 0:
               break;
            default:
                printf("wrong choice...");
                break;            
       }   
       }while(ch!=0);
}