#include<stdio.h>
int main()
{
int a[5],max,min;
int n,sum=0,x,k;
printf("enter the no. =");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    sum+=a[i];
}
max=sum;
min=sum;
for(int i=0;i<n;i++)
{
  x=sum-a[i];

}
        if(x<min)
        printf("%d\n",x);
        if(x>max)
        printf("%d\n",x);

for(int i=0;i<n;i++)
{
  x=sum+a[i];

}
for(int i=0;i<n;i++)
{
    k=x-a[i];
}
        if(x<min)
        printf("%d\n",k);
        if(x>max)
        printf("%d\n",k);
}
