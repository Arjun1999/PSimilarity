#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,arr[1001],i,x;
    long int sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
    printf("%ld",sum);
    return 0;
}
/*long int sum(int t)
{   
    int i,arr[t];
    long int sum;
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    return sum;
*/
