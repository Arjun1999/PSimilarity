#include<stdio.h>
int main()
{
int a=0,b=0,total_sum=0;
scanf("%d%d",&a,&b);
if(a>b)
{
    total_sum+=a;
    a++;
}
if(a<b)
{
    a--;


}
printf("%d",total_sum);
return 0;


}

