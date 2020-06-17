#include<stdio.h>
int Arrsum();
void main()
{
    int s;
   s=Arrsum();
   printf("%d\n",s); 
}
int Arrsum()
{

   int n,sum=0;
   printf("enter n\n");
   scanf("%d",&n);
   int arr[n];
   printf("enter elements\t");
   for(int i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
       sum=sum+arr[i];
   }
   return sum;
}
