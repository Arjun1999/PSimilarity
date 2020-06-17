#include<stdio.h>

int main(){
    int n;
    int sum=0;
    int a[50],i;
    scanf("%d",&n);//getchar();
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);//getchar();
        sum=sum+a[i];
    }
    
    //printf("\n");
    printf("%d",sum);
    //getchar();

    return 0;
}
