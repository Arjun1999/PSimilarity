#include <stdio.h>
#include<math.h>
void main()
{
int  n , sum,c, value;
printf("enter the 10 number ");
scanf("%d";&n);
for(c=1;c<=n; c++)
{
    scanf("%d",&value);
    sum = sum +value;
}
printf("sum of the number = %d",sum);
return(sum)
}
