#include<stdio.h>
int main ()
{
    int n, i, sum;
    int s[50];

    scanf("%d", &n);
  
    for(i=0;i<n;i++)
    {
        scanf("%d", &s[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+s[i];
    }
    printf("%d", sum);
    return(0);
    
}