/*
 * =====================================================================================
 *
 *       Filename:  1130.java
 *
 *    Description:  
 *    Given an integer N(0 ≤ N ≤ 10000), your task is to calculate N!
 *    Input
 *    One N in one line, process to the end of file.
 *    Output
 *    For each N, output N! in one line.
 *    Sample Input
 *    1
 *    2
 *    3
 *    Sample Output
 *    1
 *    2
 *    6
 *
 *        Created:  02/23/2015 21:33:21
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

import java.util.Scanner;
import java.math.BigInteger;
public class Main{
	private static Scanner sc;
	public static void main(String[] args){
		sc=new Scanner(System.in);
		while(sc.hasNext()){
			int n=sc.nextInt();
			BigInteger fac=BigInteger.valueOf(1);
			for(int i=1;i<=n;++i){
				BigInteger t=BigInteger.valueOf(i);
				fac=fac.multiply(t);
			}
			System.out.println(fac);
		}
	}
}
