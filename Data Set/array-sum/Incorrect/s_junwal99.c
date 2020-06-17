#include<stdio.h>
int main()
{
int n,i,ar[10],sum;
scanf("%d",&n);
for(i=0;i<n;i++)
   {
      scanf("%d",&ar[i]);
   } 
sum = simpleArraySum(ar, n);
printf("%d",sum);
return 0;
}
int simpleArraySum(int ar[], int n)
{
   int sumofarr=0,i;
   for(i=0;i<n;i++)
   sumofarr=sumofarr + ar[i];
return sumofarr;
}
