#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,n,i,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
                {
    scanf("%d",&a);
    sum=sum+a;
}
    
    printf("%d\n",sum);
    
return 0;
}
