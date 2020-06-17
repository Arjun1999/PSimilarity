#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long a[5];
    for(int i = 0; i < 5; i++){
        scanf("%lld",&a[i]);
    }
    for(int i = 0; i < 4; i++)
	{
		for(int j = i+1; j < 5;j++)
		{
			if(a[i]>a[j])
			{
				int c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
    
    printf("%lld ",a[0]+a[1]+a[2]+a[3]);
    printf("%lld",a[1]+a[2]+a[3]+a[4]);
    return 0;
}
