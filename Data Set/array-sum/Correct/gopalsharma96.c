#include<stdio.h>
int sum(int a[],int n) {
    int z=0,i;
    for(i=0;i<n;i++) 
        z+=a[i];
    return z;
}
int main()  {
    int i,n,s=0,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    s=sum(a,n);
    printf("%d",s);   
    return 0;
}
