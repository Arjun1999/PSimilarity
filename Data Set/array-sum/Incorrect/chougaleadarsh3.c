 #include<stdio.h>
 int main()
 {
      int i,a[10],n;
      printf("Enter the number of elements in an array : ");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          printf("Enter number %d : ",i);
          scanf("%d",&a[i]);
      }

      int sum=0;
      for(i=0;i<n;i++)
      {
          sum=sum+a[i];
      }
      printf("sum of elements is %d",sum);
    return 0;
 }