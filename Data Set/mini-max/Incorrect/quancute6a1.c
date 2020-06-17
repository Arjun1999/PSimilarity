#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int hohi[n];
    int save[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&hohi[i]);
        sum+=hohi[i];
    }
    for(int i=0;i<n;i++){
        save[i]=sum-hohi[i];
    }
    printf("%d",sum);
    int max=save[0];
    int min=save[1];
    for(int i=0;i<n;i++){
        if(save[i]>max) max=save[i];   
    }
    for(int j=0;j<n;j++){
        if(save[j]<min) min=save[j];
    }
    printf("%d %d",min,max);
}