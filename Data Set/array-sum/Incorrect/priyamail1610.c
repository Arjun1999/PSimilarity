#include <math.h>
#include <stdio.h>
    // Complete this function


int main() {
    int i,arr[50],sum,num;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {scanf("%d",&arr[i]);
     sum=0;
    }
    for(i=0;i<num;i++)
    {sum=sum+arr[i];}
    printf("%d",sum);
    return 0;
}
