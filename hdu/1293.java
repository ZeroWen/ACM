/*
 * =====================================================================================
 *
 *       Filename: 1293.java 
 *
 *    Description:
 *    Let f (n) be the number of paths with n steps starting from O (0, 0), with steps of the type (1, 0), or (-1, 0), or (0, 1), and never intersecting themselves. For instance, f (2) =7, as shown in Fig.1. Equivalently, letting E=(1,0),W=(-1,0),N=(0,1), we want the number of words A1A2...An, each Ai either E, W, or N, such that EW and WE never appear as factors.
 *    Input
 *    There are multiple cases in this problem and ended by the EOF. In each case, there is only one integer n means the number of steps(1<=n<=1000).
 *    Output
 *    For each test case, there is only one integer means the number of paths.
 *    Sample Input
 *    1
 *    2
 *    Sample Output
 *    3
 *    7
 *        Created:  05/17/2015 00:10:34
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

import java.math.BigInteger;
import java.util.Scanner;
class Main {
	private static Scanner sc;
	public static void main(String[] args) {
		BigInteger[] a = new BigInteger[1001];
		a[1] = BigInteger.valueOf(3);
		a[2] = BigInteger.valueOf(7);
		BigInteger two = BigInteger.valueOf(2);
		for (int i = 3; i<=1000; ++i) {
			a[i] = a[i-1].multiply(two).add(a[i-2]);
		}
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()){
			int n = sc.nextInt();
			System.out.println(a[n]);
		}
	}
}
