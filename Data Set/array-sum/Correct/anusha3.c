#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int a[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
       sum=sum+a[i]; 
    }
    return sum;
}

int main() {
    int n;
    scanf("%d",&n);
    int i,j,a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
  
    }
    printf("%d",sum(a, n));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
