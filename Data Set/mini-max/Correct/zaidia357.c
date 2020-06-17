#include<stdio.h>
int main(){
long int a[5],max,minval=0,maxval=0;int i,j,temp;
for(i=0;i<5;i++){
    scanf("%ld",&a[i]);
}
for(i=0;i<5;i++){
        for(j=0;j<4;j++)
    if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
}

max=a[4];
for(i=0;i<4;i++){
    minval=minval+a[i];}
    printf("%ld ",minval);
for(i=1;i<5;i++){
    maxval=maxval+a[i];
}
printf("%ld",maxval);



return 0;
}
