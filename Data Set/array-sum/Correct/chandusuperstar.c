#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a[1000],i,N,sum=0;
scanf("%d",&N);

for(i=1;i<=N;i++)
scanf("%d",&a[i]);

for(i=1;i<=N;i++)
sum=sum+a[i];

printf("%d",sum);
    return 0;
}
