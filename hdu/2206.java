/*
 * =====================================================================================
 *
 *       Filename:  2206.java
 *
 *    Description:  
 *    Problem Description
 *    在网络课程上，我学到了很多有关IP的知识。IP全称叫网际协议，有时我们又用IP来指代我们的IP网络地址，现在IPV4下用一个32位无符号整数来表示，一般用点分方式来显示，点将IP地址分成4个部分，每个部分为8位，表示成一个无符号整数（因此不需要用正号出现），如192.168.100.16，是我们非常熟悉的IP地址，一个IP地址串中没有空格出现（因为要表示成一个32数字）。
 *    但是粗心的我，常常将IP地址写错，现在需要你用程序来判断。
 *    Input
 *    输入有多个case，每个case有一行，不超过100个字符。
 *    Output
 *    对于每个case，判断输入的IP是否正确，如果正确输入YES，否则NO。
 *    Sample Input
 *    192.168.100.16
 *    Sample Output
 *    YES
 *
 *     Created:  06/10/2015 19:40:23
 *
 *     Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {
			boolean flag = true;
			int dot1=-1,dot2;
			String str = sc.nextLine();
			if(str.matches("((2[0-4]\\d|25[0-5]|[01]?\\d\\d?)\\.){3}(2[0-4]\\d|25[0-5]|[01]?\\d\\d?)")){
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
	}
}
