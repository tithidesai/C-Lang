#include<stdio.h>
#define n 10
int running(int b[])
{
    for(i=0;i<10;i++)
     {
       printf("%d",b[i]);
     }
}
int main()
{
      int arr[n],i;
      int running total=0;
      for(i=0;i<n;i++)
      {
             printf("enter val:")
             scanf("%d",&arr[i]);
      }
      for(i=0;i<n;i++)
      {
            running total+=arr[i];
            printf("running total:%d\n",running total);
      }
      running(arr);
} 