#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int solvesum(int a[],int t)
    {
    int i,sum=0;
    for(i=0;i<t;i++)
        {
        sum+=a[i];
    }
    return sum;
}
int main() {
    int t,i,a[1000],ans;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
        {
        scanf("\n%d",&a[i]);
    }
    ans=solvesum(a,t);
    printf("%d",ans);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
