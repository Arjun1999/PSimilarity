int main()
{
    int n,*arr,i,sum=0,max,min;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;scanf("%d",arr+i),sum+=*(arr+i),i++);
    max=min=sum-*(arr);
    for(i=1;i<n;max=max<sum-*(arr+i)?sum-*(arr+i):max,min=min>sum-*(arr+i)?sum-*(arr+i):min,i++);
    printf("%d %d",max,min);
}