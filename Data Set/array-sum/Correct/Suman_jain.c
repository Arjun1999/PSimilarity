#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int array(int n)
    {
    int a[n];
    int i,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
        return(sum);
}
int main() {
    int a,out;
    scanf("%d",&a);
    out=array(a);
    printf("%d",out);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
