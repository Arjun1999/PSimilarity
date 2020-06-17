#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int i,j,k,l,m,b[5],sum[5],big=0;
for(m=0;m<5;m++)
{

    sum[m]=0;
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(j!=i)
{
sum[i]=sum[i]+a[j];
}
}
b[i]=sum[i];

}
for(k=0;k<5;k++)
{
if(b[k]>big)
{
big=b[k];
}
}
int small=b[0];
for(l=0;l<5;l++)
{
if(b[l]<small)
{
small=b[l];
}
}
printf("%d %d",small,big);
}
