#include<stdio.h>
main()
{
int a[10];
int i; int x=0; int y=0;
for(i=0;i<5;i++)
{
scanf("%d", &a[i]);
}
for(i=0;i<5;i++)
{
if(a[i]<a[i+1])
{
x = a[i+1];
}

}
for(i=0;i<5;i++)
{
if(a[i]>a[i+1])
{
y = a[i+1];
}

}
int min;
min = ( a[0] + a[1] + a[2] + a[3] + a[4] ) - x ;
int max;
max = ( a[0] + a[1] + a[2] + a[3] + a[4] ) - y ;
printf("%d %d", min, max);
}