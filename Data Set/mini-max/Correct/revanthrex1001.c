#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j;
    long int t,a[4];
    
    for(i=0;i<5;i++)
    scanf("%ld",&a[i]);
    
    for(int i=0; i<5; i++)

	{

		for(int j=0; j<4; j++)

		{

			if(a[j]>a[j+1])

			{

				 t = a[j+1];

				a[j+1] = a[j];

				a[j]=t;

			}

		}

	} 
    
    printf("%ld %ld", a[0]+a[3]+a[2]+a[1] ,a[4]+a[3]+a[2]+a[1] );
    
    return 0;
}
