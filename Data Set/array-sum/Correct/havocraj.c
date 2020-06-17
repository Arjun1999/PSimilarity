#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t , a[1000],sum=0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%d",&t);
   // printf("\n");
        for(int i=0;i<t;i++)
        {scanf("%d",&a[i]);
         sum=sum+a[i];}
    printf("%d",sum);
         
    
    return 0;
}
