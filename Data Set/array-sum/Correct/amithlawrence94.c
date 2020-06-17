#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int l,sum=0;
int a[1000];
    int *ptr;
    ptr=a;
    scanf("%d",&l);
   
    for(int j=0;j<l;j++)
        {
        scanf("%d ",&a[j]);
        sum=sum+*ptr;
        ptr++;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf("%d",sum);
    return 0;
}
