static void miniMaxSum(int[] arr) {
       int max_sum=0,min_sum=0;   
    int countMin =0 , countMax=0; 
    int largest= arr[0];
    int smallest= arr[0];
    int cl=0;
    int cs=0;


    for(int i=1;i<arr.length;i++)
    {
       if(arr[i]>=largest)
       {
            largest= arr[i];

       }


        if(arr[i]<=smallest)
        {
             smallest= arr[i];

        }


    }

      for(int i=0;i<arr.length;i++)
    {
        if(arr[i]==largest)
            cl++;

          if(arr[i]==smallest)
            cs++;   
    }
   // System.out.println(cl+" "+cs);
    for(int i=0;i<arr.length;i++)
    {


        if(arr[i]!=smallest && countMax<5)
        {
            max_sum+=arr[i];



            countMax++;
        }
        if(arr[i]!=largest && countMin<5)
        {
            min_sum+=arr[i];

            countMin++;

        }
    }

     if(cs>1) 
                max_sum+=((cs-1)*smallest);
      if(cl>1)
               min_sum+= ((cl-1)*largest);

    System.out.print(min_sum+" "+max_sum);


}

private static final Scanner scanner = new Scanner(System.in);

public static void main(String[] args) {
    int[] arr = new int[5];

    String[] arrItems = scanner.nextLine().split(" ");
    scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

    for (int i = 0; i < 5; i++) {
        int arrItem = Integer.parseInt(arrItems[i]);
        arr[i] = arrItem;
    }

    miniMaxSum(arr);

    scanner.close();
}
