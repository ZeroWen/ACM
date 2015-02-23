/*
 * =====================================================================================
 *
 *       Filename:  1130.java
 *
 *    Description:  
 *    A binary search tree is a binary tree with root k such that any node v reachable from its left has label (v) <label (k) and any node w reachable from its right has label (w) > label (k). It is a search structure which can find a node with label x in O(n log n) average time, where n is the size of the tree (number of vertices).
 *    Given a number n, can you tell how many different binary search trees may be constructed with a set of numbers of size n such that each element of the set will be associated to the label of exactly one node in a binary search tree?
 *    Input
 *    The input will contain a number 1 <= i <= 100 per line representing the number of elements of the set.
 *    Output
 *    You have to print a line in the output for each entry with the answer to the previous question.
 *    Sample Input
 *    1
 *    2
 *    3
 *    Sample Output
 *    1
 *    2
 *    5
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
			System.out.println(Catalan[n]);
		}
	}
}
