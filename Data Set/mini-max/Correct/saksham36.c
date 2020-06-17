// https://www.hackerrank.com/challenges/mini-max-sum

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


void sort(long long int a, long long int b, long long int c, long long int d, long long int e, long long int *p)
{ 	
	int i,j,temp;
    for(i=4;i>0;i--)
        {
        	for(j=0;j<i;j++)
        	{	
        		if(*(p+j) > *(p+j+1))
        		{
        			temp = *(p+j);
        			*(p+j) = *(p+j+1);
        			*(p+j+1) = temp;
        			
        			//printf("\n %lld %lld \n", *(p+j), *(p+j+1));
				}
			}
        }
}
int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long long int arr[5] = {a, b, c, d, e};
    
    
    sort(a,b,c,d,e,arr);
    
   /* int i;
    for(i=0;i<5;i++)
    printf("%lld\n", arr[i]);
   */
  
    long long int min, max;
    min = arr[0] + arr[1] + arr[2] + arr[3];
    max = arr[1] + arr[2] + arr[3] + arr[4];
    printf("%lld %lld", min, max);
    return 0;
}
