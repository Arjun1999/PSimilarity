#include <math.h>
#include <stdio.h>
#include<stdlib.h>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    int *a,sum=0;
    a=(int*)malloc(n*sizeof(int));
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d\n",sum);
      return 0;
}
