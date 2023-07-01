#include<iostream>
using namespace std;
class Test{
    //int m;
        public:
        Test()
        {
                cout<<"defulat constuctor is called..."<<endl;
                
        }
        Test(int a)
        {
                cout<<"value of a is:"<<a<<endl; 
        }
       /* Test(int a, int b)
        {
                cout<<"addition of a and b is:"<<a+b<<endl; 
        }
        Test(double a, double b)
        {
                 cout<<"product of a and b is:"<<a*b<<endl;
        }
        Test(int a, int b, int x)
        {
                 cout<<"addition of a,b,and x is: "<<a+b+x<<endl;
        }*/
};
int main()
{
       Test a, b(10);
       //a(10,20),b(5,5,2.3),c(1,2,3),t(1,2);
       //cout<<"char:"<<sizeof(char)<<endl;
       //cout<<"int:"<<sizeof(int)<<endl;
       //cout<<"flaot:"<<sizeof(float)<<endl;
       //cout<<"double:"<<sizeof(double)<<endl;
}