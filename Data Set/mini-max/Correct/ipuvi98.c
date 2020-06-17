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
    long int f,g,h,i,j;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
	f=a+b+c+d;
    g=a+b+c+e;
    h=a+b+d+e;
    i=a+c+d+e;
    j=b+c+d+e;
    
    if(f<=g && f<=h && f<=i && f<=j)
    {
	    printf("%ld ",f);
	}
	else if(g<=f && g<=h && g<=i && g<=j)
    {
    	printf("%ld ",g);
    }
	else if(h<=f && h<=g && h<=i && h<=j)
    {
    	printf("%ld ",h);
	}
	else if(i<=f && i<=g && i<=h && i<=j)   
	{
		printf("%ld ",i);
	}
	else if(j<=f && j<=g && j<=h && j<=i)
	{
		printf("%ld ",j);
	}
	
	
    if(f>=g && f>=h && f>=i && f>=j)
    {
	    printf("%ld ",f);
	}
	else if(g>=f && g>=h && g>=i && g>=j)
    {
    	printf("%ld ",g);
    }
	else if(h>=f && h>=g && h>=i && h>=j)
    {
    	printf("%ld ",h);
	}
	else if(i>=f && i>=g && i>=h && i>=j)   
	{
		printf("%ld ",i);
	}
	else if(j>=f && j>=g && j>=h && j>=i)
	{
		printf("%ld ",j);
	}
	
	return 0;
}
