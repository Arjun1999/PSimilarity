#include <stdio.h>
int sumOfArray(int);
int main() {
int size,sum;
scanf("%d",&size);
sum= sumOfArray(size);
printf("%d",sum);
	return 0;
}
int sumOfArray(int n)
{
    int a[n],s=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    
    }
    for( i=0;i<n;i++)
    {
        s=s+a[i];
    
    }
return s;
    
}
