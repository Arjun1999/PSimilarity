#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
# define N 1000
int main() {

    int t,i,arr[N],sum=0;
	scanf("%d",&t);
	if(0<=t && t<=1000){
		for(i=0;i<t;i++){
			scanf("%d",&arr[i]);
		}
		for(i=0;i<t;i++){
			sum=sum+arr[i];
		}
		printf("%d",sum);
	}
    return 0;
}
