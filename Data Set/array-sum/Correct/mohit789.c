#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,n,sum=0;
    scanf("%d",&i);
    int array[i];
    for(j=0;j<i;j++)
        { scanf("%d ",&n);
         array[j]=n;
        }
    for(j=0;j<i;j++)
        {  sum=sum+array[j];
        
        }

    printf("%d",sum); 
    return 0;
}
