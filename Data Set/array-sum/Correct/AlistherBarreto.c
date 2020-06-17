#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 1000

int sum(int a[],int len);
int main() {
    
    int a[MAX];
	int tot=0;
	int i,t,result;
	
    int sum(int a[],int len)
    {
	for(i=0;i<len;i++)
	{
		tot=tot+a[i];
	}
	return tot;
	}
	
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	
	result=sum(a,t);
	
	printf("%d",result);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
