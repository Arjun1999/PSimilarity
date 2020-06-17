#include<stdio.h>
void sortarr(int n, int *a){
    int i,j,p;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
          if(a[j]<a[i]){
            p=a[i];
            a[i]=a[j];
            a[j]=p;
       }
    }
}
}
void sum(int n, int *a, int *b){
    int i,j,x=0,y=0;
    for(i=0;i<4;i++){
        x+=a[i];

    }
    for(j=n-1;j>=n-4;j--){
        y+=a[j];
    }
   b[0]=x;
    b[1]=y;

}
int main(){
    int i,n, a[100] ,b[2];
    scanf("%d",&n);
    //a=malloc(n*sizeof(int));
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
    sortarr(n,a);
    sum(n,a,b);
    printf("%d %d",*b,*(b+1));
}


