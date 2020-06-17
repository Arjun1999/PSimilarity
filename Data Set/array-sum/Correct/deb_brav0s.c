#include <stdio.h>

int main() 
{int i,test,sum=0;
scanf(" %d",&test);
int arr[test];
for(i=0;i<test;i++)
{scanf(" %d",&arr[i]);
sum+=arr[i];
}
printf("%d",sum);
return 0;
}
