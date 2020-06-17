#include<stdio.h>
int main(){
    long n;
    int i,j,max;
    scanf("%ld",&n);
    long cap[n];
    for(i=0;i<n;i++){
        scanf("%ld",&cap[i]);
    }
           max=cap[0];
           for(j=1;j<n;j++){
        if(max<cap[j])
            max=cap[j];
    }
    int p=0;
    for(j=0;j<n;j++){
        if(max==cap[j]){
             p=p+1;
            }
    } 
    
    
    printf("%d\n",p);
    return 0;
}

