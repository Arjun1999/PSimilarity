#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a[1000],num,sum=0,i;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];}
	printf("%d",sum);
    return 0;
}
