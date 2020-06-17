

#include <stdio.h>
int main(){
     int x[10],i,n,sum=0;
     scanf("%d",&n);
     for(i=0;i<n;++i){
          scanf("%d",&x[i]);
          sum+=x[i];
     }
    printf("%d",sum);
return 0;
}