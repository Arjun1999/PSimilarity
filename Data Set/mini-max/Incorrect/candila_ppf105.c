#include<stdio.h>
void main(){
    int ar[10],min,max,n,sum=0,i,sum2=0;
    printf("Enter the range of the array:",i);
            scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d value:");
                scanf("%d",&ar[i]);
    }
    max=ar[0];
    min=ar[0];
    for(i=0;i<n;i++){
        if(max<ar[i])
        max=ar[i];
}
        for(i=0;i<n;i++){
        if(min>ar[i])
        min=ar[i];
}
for(i=0;i<n;i++){
    if(max==ar[i]) {
        max=ar[i];
}
    else{
        sum+=ar[i];
}
}
for(i=0;i<n;i++) {
        if(min==ar[i]) {
        min=ar[i];
}
    else{
        sum2+=ar[i];
}
}
    printf("First:%d",sum);
    printf("Sec:%d",sum2);    
}