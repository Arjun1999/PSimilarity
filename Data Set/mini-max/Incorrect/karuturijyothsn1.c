# include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n ; i++)
        scanf("%d",&a[i]);
    int sum = 0;
    for(int i = 0 ;i < n ; i++)
        sum=sum+a[i];
     int min,max;
     min=max=a[0];
    for(int i = 0 ;i < n ;i++){
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("%d",sum-max);
    printf("%d",sum-min);
}