#include<stdio.h>
main(){
int a[10],i,x,sum=0;
printf("Enter no. of elements");
scanf("%d",&x);
printf("Enter the elements");
for(i=0;i<x;i++)
   scanf("%d",a[i]);
for(i=0;i<x;i++)
  sum=sum+a[i];
printf("The sum is %d ",sum);  

}