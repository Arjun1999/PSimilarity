#include <stdio.h>

int main()
{
    int N,i,a[1000],sum=0;
     scanf("%d",&N);
    for(i=0;i<N;i++)
        {
          scanf("%d",&a[i]);
          sum=sum+a[i];
        }
  printf("%d",sum);

     
    return 0;
}
