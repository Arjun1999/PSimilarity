#include <stdio.h>
#define  max 1000
int main() {
    int n[max],i,sum=0,m;
     scanf("%d",&m);
    for(i=0;i<m;i++)
    scanf("%d",&n[i]);
     for(i=0;i<m;i++)
     {
     sum =sum+n[i] ; 
     }    
    printf("%d",sum);
    return 0;
}
