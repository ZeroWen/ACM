/*
 * =====================================================================================
 *
 *       Filename:  1316.java
 *
 *    Description:  
 *    Recall the definition of the Fibonacci numbers:
 *    f1 := 1
 *    f2 := 2
 *    fn := fn-1 + fn-2 (n >= 3)
 *    Given two numbers a and b, calculate how many Fibonacci numbers are in the range [a, b].
 *    Input
 *    The input contains several test cases. Each test case consists of two non-negative integer numbers a and b. Input is terminated by a = b = 0. Otherwise, a <= b <= 10^100. The numbers a and b are given with no superfluous leading zeros.
 *    Output
 *    For each test case output on a single line the number of Fibonacci numbers fi with a <= fi <= b.
 *    Sample Input
 *    10 100
 *    1234567890 9876543210
 *    0 0
 *    Sample Output
 *    5
 *    4
 *    
 *        Created:  02/24/2015 18:25:34
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */


import java.math.BigInteger;
import java.util.Scanner;
public class Main{
	private static Scanner sc;
	public static void main(String[] args){
		sc=new Scanner(System.in);
		while(sc.hasNext()){
			BigInteger a=sc.nextBigInteger();
			BigInteger b=sc.nextBigInteger();
			BigInteger zero=BigInteger.valueOf(0);
			if(a.equals(zero)&&b.equals(zero))
				break;
			BigInteger one=BigInteger.valueOf(1);
			BigInteger i=BigInteger.valueOf(1);
			BigInteger j=BigInteger.valueOf(1);
			BigInteger t;
			int count=0;
			while(i.compareTo(b)!=1){
				t=i.add(j);
				i=j;
				j=t;
				if(i.compareTo(a)!=-1&&i.compareTo(b)!=1)
					count++;
			}
			System.out.println(count);
		}
	}
}
