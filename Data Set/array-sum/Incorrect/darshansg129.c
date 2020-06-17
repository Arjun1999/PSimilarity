#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[20],sum=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d\t",&array[i]);
        sum=sum+array[i];
    }

    printf("%d",sum);








    return 0;
}