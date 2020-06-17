#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i;
    scanf("%d",&n);
    int *p = (int *) malloc(sizeof(int) * n);
   long sum=0;
   
    /*while(n){
        
        sum=sum+p[n-1];
        n--;
    }
    */
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
        sum=sum+p[i];
        
    }
    printf("%ld\n",sum);
  //  printf("%d\n",sum);
    return 0;
}