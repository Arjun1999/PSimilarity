#include<stdio.h>
int main(){
int a[5],sum=0;
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
    sum+=a[i];
}
int max,min;
max=min=a[0];
for(int i=0;i<5;i++){
    if(a[i]>max)
        max=a[i]; 
   else if(a[i]<min)
        min=a[i];
}
printf("\n%d\n",sum-max);
printf("\n%d\n",sum-min);
}