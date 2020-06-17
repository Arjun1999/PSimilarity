#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int max,min;
    scanf("%li %li %li %li %li",&a,&b,&c,&d,&e);
    if(a==b&&a==c&&a==d&&a==e)
        {
        printf("%li %li",(b+c+d+e),(b+c+d+e));
    }
        else{
        if(a>b&&a>c&&a>d&&a>e)
        {
        min=b+c+d+e;
        printf("%li ",min);
    }
    if(b>a&&b>c&&b>d&&b>e)
        {
        min=a+c+d+e;
        printf("%li ",min);
    }
    if(c>b&&c>a&&c>d&&c>e)
        {
        min=b+a+d+e;
        printf("%li ",min);
    }
    if(d>b&&d>c&&d>a&&d>e)
        {
        min=b+c+a+e;
        printf("%li ",min);
    }
    if(e>b&&e>c&&e>d&&e>a)
        {
        min=b+c+d+a;
        printf("%li ",min);
    }
    if(a<b&&a<c&&a<d&&a<e)
       {
        max = b+c+d+e;
        printf("%li ",max); 
    }
    else if(b<a&&b<c&&b<d&&b<e)
        {
        max = a+c+d+e;
        printf("%li ",max);
}
    else if(c<b&&c<a&&c<d&&c<e)
        {
        max = b+a+d+e;
        printf("%li ",max);
}
    else if(d<b&&d<c&&d<a&&d<e)
        {
        max = b+c+a+e;
        printf("%li ",max);
    }
    else if(e<b&&e<c&&e<d&&e<a)
        {
        max = b+c+d+a;
        printf("%li ",max);
    }
    }

    return 0;
}
