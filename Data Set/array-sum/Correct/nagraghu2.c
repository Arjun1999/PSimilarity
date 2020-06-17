#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,num,arr[1000],sum=0;
   
    scanf("%d",&num);
    for(i=0;i<num;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<num;i++)
        {
        sum=sum+arr[i];
    }
    printf("%d",sum);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
