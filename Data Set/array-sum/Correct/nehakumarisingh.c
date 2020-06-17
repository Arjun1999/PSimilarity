#include <stdio.h>
int main() {
int n,i,a[1010],sum=0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        sum=sum+a[i];
       }
    printf("%d\n",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
