#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int co[10000000001];
int smith[1001];
int top=-1;
void si(){
for(int i=2;i<=1000;i++){
    if(co[i]==0){
        for(int j=2;j*i<=1000000;j++){
            co[i*j]++;
        }
    }
}
    for(int l=3;l<=1000000;l++){
        if(co[l]>=3)smith[++top]=l;
    }
}
int main(){
    int t;
    si();
    scanf("%d",&t);
    for(int h=1;h<=t;h++){
        int n;
        scanf("%d",&n);
        printf("%d\n",smith[n-1]);
    }
    return 0;
}
