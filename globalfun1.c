#include<stdio.h>
int maths,sci,eng,total;
float per;
void dis()
{
     printf("maths\tsci\teng\ttotal\tper\n");
	 printf("%d\t%d\t%d\t%d\t%.2f",maths,sci,eng,total,per);
}
void calc()
{
    	total=maths+sci+eng;
		per=(float)total/3;
		dis();
}
void setdata()
{
		printf("enter maths marks:");
		scanf("%d",&maths);
		printf("enter science marks:");
		scanf("%d",&sci);
		printf("enter english marks:");
		scanf("%d",&eng);
		calc();
}
int main()		
{
   setdata();
}   