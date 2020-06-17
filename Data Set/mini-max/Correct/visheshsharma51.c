import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static void miniMaxSum(long[] arr,long min,long max) {
        // Complete this function
        long sum=0;
        for(int i=0;i<arr.length;i++){
            sum+=arr[i];
        }
        System.out.println((sum-max)+" "+(sum-min));
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long[] arr = new long[5];
        long min=Long.MAX_VALUE;long max=0;
        for(int arr_i = 0; arr_i < 5; arr_i++){
            arr[arr_i] = in.nextLong();
            min=Math.min(min,arr[arr_i]);
            max=Math.max(max,arr[arr_i]);
        }
        miniMaxSum(arr,min,max);
        in.close();
    }
}
