#include"stdio.h"
int main(){
int i,arr[5],sum=0,val=0;
for (i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
for (i=1;i<=4;i++){
    sum=sum+i;
}
for (i=2;i<=5;i++){
    val=val+i;
}
printf("%d %d",sum,val);
    return 0;

}

