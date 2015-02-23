/*
 * =====================================================================================
 *
 *       Filename:  1134.java
 *
 *    Description:  
 *    This is a small but ancient game. You are supposed to write down the numbers 1, 2, 3, ... , 2n - 1, 2n consecutively in clockwise order on the ground to form a circle, and then, to draw some straight line segments to connect them into number pairs. Every number must be connected to exactly one another. And, no two segments are allowed to intersect.
 *    It's still a simple game, isn't it? But after you've written down the 2n numbers, can you tell me in how many different ways can you connect the numbers into pairs? Life is harder, right?
 *    Input
 *    Each line of the input file will be a single positive number n, except the last line, which is a number -1. You may assume that 1 <= n <= 100.
 *    Output
 *    For each n, print in a single line the number of ways to connect the 2n numbers into pairs.
 *    Sample Input
 *    2
 *    3
 *    -1
 *    Sample Output
 *    2
 *    5
 *
 *        Created:  02/23/2015 17:03:56
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

import java.math.BigInteger;
import java.util.Scanner;

public class Main{
	private static Scanner sc;

	public static void main(String args[]){
		BigInteger[] Catalan=new BigInteger[101];
		Catalan[1]=BigInteger.valueOf(1);
		Catalan[2]=BigInteger.valueOf(2);
		for(int i=3;i<101;++i){
			BigInteger b1=BigInteger.valueOf(4*i-2);
			BigInteger b2=BigInteger.valueOf(i+1);
			Catalan[i]=Catalan[i-1].multiply(b1).divide(b2);
		}
		sc = new Scanner(System.in);
		while(sc.hasNext()){
			int n=sc.nextInt();
			if(n==-1){
				break;
			}
			System.out.println(Catalan[n]);
		}
	}
}
