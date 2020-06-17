#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j;
	long int a[5];
	int k,l;
	for(i=0;i<5;i++){
		scanf("%lld",&a[i]);
	}
	for(l=0;l<5;l++){
		for(i=0;i<4;i++){
			for(j=i+1;j<5;j++){
				if(a[i]>=a[j]){
					k=a[i];
					a[i]=a[j];
					a[j]=k;
				}
			}
		}
	}
	long int max=0,min=0;
	for(i=1;i<5;i++){
		max+=a[i];
	}
	for(i=0;i<4;i++){
		min+=a[i];
	}
	printf("%lld %lld",min,max);
	return 0;
}
