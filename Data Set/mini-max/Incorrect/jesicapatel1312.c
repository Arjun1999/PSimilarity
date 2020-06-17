#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int fac(int n)
{
    static int i=2;
    if(n%i==0 && n>0)
    {
        printf("%d",i);
        n=n/i;
        fac(n);
        return;
    }
    else if(n>1)
    {
        i++;
    fac(n);
        return;
    }
    else{
       return(0);
}
}

int sum(int n)
{
    if(n==0)
    {
        return(0);
    }
    else
    {
        int d;
        d=n%10;
            
        return(d+sum(n/10));
}
int main() {
    int n=12,c;
    sum(n);
    //printf("%d",c);
    
    

	return 0;
}

    
