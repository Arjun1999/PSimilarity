#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
 



8. Write a program to have try catch and finally blocks for the following exceptions
1.Divide by zero
2.Accessing array with indices
3.Call a method of using a null variable






import java.util.*;
public class Solution {

	public static void main(String[] args) {
		Scanner s = new Scanner (System.in);
		int a=10;
		int b=0,c=0;
		String st="";
//System.out.println("divide by zero example:");
		try{
			c=a/b;
		}
		catch(Exception e){
			st=e.toString();
		}
		finally{
			System.out.println(st);
		}
//System.out.println("array indices access example:");
		int array[]={1,2,3,3,4};
		try{
			System.out.println(array[5]);
		}
		catch(Exception e){
		st=e.toString();
		}
		finally{
			System.out.println(st);
		}
		Solution as=null;
		try{
			as.func();
		}
		catch(Exception e){
			st=e.toString();
		}
		finally{
			System.out.println(st);
		}
	}
	public  void func(){
		
	}

}
9. Given an array of ints, return the number of 9's in the array.
Examples
arrayCount9([1, 2, 9]) → 1
arrayCount9([1, 9, 9]) → 2
arrayCount9([1, 9, 9, 3, 9]) → 3

   


import java.util.*;
public class Solution {

	public static void main(String[] args) {
		Scanner s = new Scanner (System.in);
		System.out.println("Enter the no of elements");
		int n = s.nextInt();
		int count=0;
		int a[] = new int[n];
		System.out.println("Enter the array elements");
		for(int i=0;i<n;i++){
			a[i]=s.nextInt();
			if(a[i]==9)
				count++;
		}
		System.out.println("No of nines are: "+count);
	}

}
10. Count the number of "xx" in the given string. We'll say that overlapping is allowed, so "xxx" contains 2 "xx".
Examples:
countXX("abcxx") → 1
countXX("xxx") → 2
countXX("xxxx") → 3





import java.util.*;
public class Solution {

	public static void main(String[] args) {
		Scanner s = new Scanner (System.in);
		System.out.println("Enter the string");
		String a=s.next();
		int count=0;
		char t[]=a.toCharArray();
		int n=t.length;
		for(int i=0;i<n-1;i++){
			if(t[i]=='x' && t[i+1]=='x')
				count++;
		}
		System.out.println("No of xx are: "+count);
	}

}
11. Given a string of even length, return the first half. So the string "WooHoo" yields "Woo".

Examples:
firstHalf("WooHoo") → "Woo"
firstHalf("HelloThere") → "Hello"
firstHalf("abcdef") → "abc"






import java.util.*;
public class Solution {

	public static void main(String[] args) {
		Scanner s = new Scanner (System.in);
		System.out.println("Enter the string");
		String a=s.next();
		int n=a.length();
		
		System.out.println(a.substring(0,n/2));
	}

}

12. Given an array of ints length 3, return the sum of all the elements.

Examples:
sum3([1, 2, 3]) → 6
sum3([5, 11, 2]) → 18
sum3([7, 0, 0]) → 7





import java.util.*;
public class Solution {

	public static void main(String[] args) {
		Scanner s = new Scanner (System.in);
		int n = s.nextInt();
		int a[]=new int[n];
		int sum=0;
		for(int i=0;i<n;i++){
			a[i]=s.nextInt();
			sum+=a[i];
		}
		System.out.println(sum);		

	}

}

13. Given 2 ints, a and b, return their sum. However, "teen" values in the range 13..19 inclusive, are extra lucky. So if either value is a teen, just return 19.
Examples:
teenSum(3, 4) → 7
teenSum(10, 13) → 19
teenSum(13, 2) → 19





import java.util.*;
public class Solution {

	public static void main(String[] args) {
		Scanner s = new Scanner (System.in);
		int a =s.nextInt();
		int b =s.nextInt();
		int sum=0;
		int n=b.length();
		if(((a>=13)&&(a<=19))||((b>=13)&&(b<=19))){
			sum=19;
		else
			sum=a+b;
		System.out.println(sum);
	}

}

14. Given two ints, each in the range 10..99, return true if there is a digit that appears in both numbers, such as the 2 in 12 and 23. (Note: division, e.g. n/10, gives the left digit while the % "mod" n%10 gives the right digit.)

Examples
shareDigit(12, 23) → true
shareDigit(12, 43) → false
shareDigit(12, 44) → false




import java.util.*;
public class Solution {

	public static void main(String[] args) {
		Scanner s = new Scanner (System.in);
		String a =s.next();
		String b =s.next();
		int flag=0;
		int n=b.length();
		for(int i=0;i<n;i++){
			String t=a.charAt(i)+"";
			if(b.contains(t)){
				flag=1;
				break;
			}
		}
		if(flag==1)
			System.out.println("true");
		else
			System.out.println("false");
		
		
	}

}
15. Given 3 int values, a b c, return their sum. However, if one of the values is the same as another of the values, it does not count towards the sum.
Examples:
loneSum(1, 2, 3) → 6
loneSum(3, 2, 3) → 2
loneSum(3, 3, 3) → 0






import java.util.*;
public class Solution {

	public static void main(String[] args) {
		Scanner s = new Scanner (System.in);
		System.out.println("Enter the array size" );
		int n=s.nextInt();
		int a[]=new int[n];
		System.out.println("enter the array elements");
		Map<Integer,Integer> m=new TreeMap<Integer,Integer>();
		for(int i=0;i<n;i++){
			a[i]=s.nextInt();
			if(m.containsKey(a[i])){
				m.put(a[i],m.get(a[i])+1);
			}
			else
				m.put(a[i],1);
		}
		int sum=0;
		for(int i=0;i<n;i++){
			int y=m.get(a[i]);
			if(y==1)

			        sum+=a[i];
			else
				continue;
		}
		System.out.println("Total sum is "+sum);
	}

}

16. Modify and return the given map as follows: if the key "a" has a value, set the key "b" to have that value, and set the key "a" to have the value "". Basically "b" is a bully, taking the value and replacing it with the empty string.
Examples:
mapBully({"a": "candy", "b": "dirt"}) → {"a": "", "b": "candy"}
mapBully({"a": "candy"}) → {"a": "", "b": "candy"}
mapBully({"a": "candy", "b": "carrot", "c": "meh"}) → {"a": "", "b": "candy", "c": "meh"}






import java.util.*;
public class Solution {

	public static void main(String[] args) {
		Scanner s = new Scanner (System.in);
		Map<String,String> m=new LinkedHashMap<String,String>();
		System.out.println("enter the no of inputs");
		int n=s.nextInt();
		char t='a';
		for(int i=0;i<n;i++){
			
			String h=String.valueOf(t);
			m.put(h,s.next());
			t=(char)(t+1);
		}
		
		System.out.println(m);
		for(int i=0;i<n-1;i=i+2){
			if(m.get(i)!=""){
				char r=(char) ('a'+i+1);
				char q=(char) ('a'+i);
				String h=String.valueOf(r);
				String x=String.valueOf(q);
				String g=m.get(x);
				m.put(x,"");
				m.put(h,g);
				
			}
		}
System.out.println(m);
	}

}



















