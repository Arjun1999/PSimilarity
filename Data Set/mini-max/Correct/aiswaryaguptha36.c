import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    /*
     * Complete the miniMaxSum function below.
     */
    static void miniMaxSum(int[] arr) {
        /*
         * Write your code here.
         */
        int min = arr[0], max = arr[0];
        int totalSum=0;
        for(int iter = 0; iter<5; iter++){
            totalSum = totalSum+arr[iter];
            if(arr[iter]>max){
                max = arr[iter];
            }
            else if(arr[iter]<min){
                min = arr[iter];
            }
        }
        System.out.println((totalSum-max)+ " "+(totalSum-min));
        

    }

    private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        int[] arr = new int[5];

        String[] arrItems = scan.nextLine().split(" ");

        for (int arrItr = 0; arrItr < 5; arrItr++) {
            int arrItem = Integer.parseInt(arrItems[arrItr].trim());
            arr[arrItr] = arrItem;
        }

        miniMaxSum(arr);
    }
}
