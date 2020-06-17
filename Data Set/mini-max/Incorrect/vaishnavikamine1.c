#include<stdio.h>
int main(void)
{
     long int a[1000000000],max=0,min=0;
     int i;
     for(i=1;i<=5;i++)
     scanf("%ld",&a[i]);
     for(i=1;i<=4;i++)
     min=min+a[i];
     for(i=5;i>1;i--)
     max=max+a[i];
     printf("%ld %ld",min,max);
     return(0);
}
