#include <stdio.h>
#include <stdlib.h>

int main() {

   int N;
    scanf("%d",&N);
    int a[N],i,sum=0;
    for(i=0;i<N;i++)
        {
        scanf("%d",&a[i]);
         sum =sum+a[i];
    }
     printf("%d",sum);
    return 0;
}
