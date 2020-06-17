 #include<stdio.h>
int main(){
 long int a[4],i,big,small;

 
  for(i=0;i<5;i++)
      scanf("%ld",&a[i]);

  big=a[0];
  for(i=1;i<5;i++){
      if(big<a[i])
           big=a[i];
  }
 
  small=a[0];
  for(i=1;i<5;i++){
      if(small>a[i])
           small=a[i];
  }
 printf("%ld",a[0]+a[1]+a[2]+a[3]+a[4]-big);
    printf(" %ld",a[0]+a[1]+a[2]+a[3]+a[4]-small);

  return 0;
}
