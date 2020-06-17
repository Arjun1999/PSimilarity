#include<stdio.h>
#include<math.h>
int main()
{
    int n,ar[100][100],i,j;
    long int d1=0,d2=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&ar[i][j]);
    }
    for(i=0;i<n;i++)
    {
      for (j = 0; j < n; j++)
      {
          if(i==j)
          d1=d1+ar[i][j];
      }
    }
    for (i = 0; i < n; i++)
    d2=d2+ar[i][n-i-1];
    diff=abs(d2-d1);
    printf("%ld",diff);
    return 0;
}