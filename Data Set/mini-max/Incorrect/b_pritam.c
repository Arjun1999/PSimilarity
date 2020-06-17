#include<stdio.h>
int main(){
    int n,i,max=0,min=0,a[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int *p;
    p=(*int)calloc(sizeof(int),n);
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<n;j++)
            if(i!=j)
                s+=a[j];
        p[i]=s;
    }
    max=p[0];
    min=p[0];
    for(i=1;i<n;i++)
    {
        if(max<p[i])
            max=p[i];
        if(min>p[i])
            min=p[i];
    }
    printf("%d %d",max,min);
    free(p);
    return 0;
}