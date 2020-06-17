#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,i,p=0,s=0,c;
    a=(int *)malloc(5*sizeof(int));
    for(i=0;i<4;i++)
        scanf("%d",a+i);

    for(i=0;i<4;i++)
        p=p+ *(a+i);
        
    for(i=1;i<5;i++) 
      s=s+ *(a+i);
      
    printf("%d\t", p);
    printf("%d",s);
}

