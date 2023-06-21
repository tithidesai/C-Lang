#include<stdio.h>
void disp(int x,int y, int z,int t,float p){
      printf("maths\tscience\tenglish\ttotal\tpercentage\n");
      printf("%d\t%d \t%d \t%d\t%.2f",x,y,z,t,p);
}
void calc(int a,int b,int c){
       int total;
       float per;
       total=a+b+c;
       per=(float)total/3;
       disp(a,b,c,total,per);
}
void setdata(){
        int maths,science,english;
        printf("enter maths marks:");
        scanf("%d",&maths);
        printf("enter science marks:");
        scanf("%d",&science);
        printf("enter english marks:");
        scanf("%d",&english);
        calc(maths,science,english);
}
void main{
  setdata();
}