#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i;long int a[5];long int s,s1;s=0;s1=0;long int max,min;
    for(i=0;i<5;i++)
        {
    printf("enter a integer\n");
    scanf("%ld\t",&a[i]);
    }
    max=a[0];
    for(i=0;i<5;i++)
        {
        if(a[i]>max)
            {
            max=a[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i]!=max)
    s=s+a[i];
    }
    printf("%ld\t",s);
    min=a[0];
    for(i=0;i<5;i++)
        {
        if(a[i]<min)
           {
            min=a[i];
    }
    }
    for(i=0;i<5;i++)
        {
        if(a[i]!=min)
            {
            s1=s1+a[i];
        }
    }
    printf("ld",s1);
    
        return 0;
    }
}
