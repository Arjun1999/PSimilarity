#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define null 0
int main() {
int n,*s,i,sum=0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  //  printf("enter the size of int");
    scanf("%d",&n);
    s=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",s+i);
    i=0;
    while(i<n){
        sum+=*(s+i);i++;}
    printf("%d",sum);
    return 0;
}