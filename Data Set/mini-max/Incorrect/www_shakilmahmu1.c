#include<stdio.h>
main(){
    int x,min,max,i,n[100000];
    scanf("%d",&x);
    for(i=0; i<x; i++){
        scanf("%d",&n[i]);
    }
    max=n[0];
    min=n[0];
    for(i=1; i<x; i++){
        if(max<n[i]){
            max=n[i];
        }
        if(max<n[i]){
            max=n[i];
        }
    }
    printf("%d %d",max,min);
}
