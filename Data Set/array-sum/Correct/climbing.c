#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,temp=0;
    scanf("%d",&n);
    int a[n];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        temp=temp+a[i];
    }
    printf("%d",temp);
    return 0;
}
