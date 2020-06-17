#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long a[1000],sum=0;
    int i,size;
    scanf("%d",&size);
    for(i=1;i<=size;i++)
    {
                        scanf("%ld\t",&a[i]);
          
    }
     for(i=1;i<=size;i++)
    {
                      //  scanf("%d\t",&a[i]);
                       sum=sum+a[i];
    }
   
    printf("%ld",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
