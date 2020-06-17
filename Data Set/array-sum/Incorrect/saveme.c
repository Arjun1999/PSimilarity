#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,n,ele,result;
    printf("enter array size:");
    scanf("%d",&n);
    printf("enter array elememts:\n");
    for(i=1;i<=n;i++)
        scanf("%d",&ele);
    result=result+ele;
    printf("sum=",result);
    
           return 0;
}
