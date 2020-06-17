#include <stdio.h>
int sum(int a,int b){
	return a+b;
}
int main(){
    int n,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s=sum(s,a[i]);
        }
    printf("%d",s);
}