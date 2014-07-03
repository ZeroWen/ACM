/*
 * =====================================================================================
 *
 *       Filename:  1256.c
 *
 *    Description:  
 *    Problem Description
 *    谁画8画的好,画的快,今后就发的快,学业发达,事业发达,祝大家发,发,发.
 *    Input
 *    输入的第一行为一个整数N,表示后面有N组数据.
 *    每组数据中有一个字符和一个整数,字符表示画笔,整数(>=5)表示高度.
 *    Output
 *    画横线总是一个字符粗,竖线随着总高度每增长6而增加1个字符宽.当总高度从5增加到6时,其竖线宽度从1增长到2.下圈高度不小于上圈高度,但应尽量接近上圈高度,且下圈的内径呈正方形.
 *    每画一个"8"应空一行,但最前和最后都无空行.
 *    Sample Input
 *    2
 *    A 7
 *    B 8
 *    Sample Output
 *    	AA
 *    AA  AA
 *    AA  AA
 *    	AA
 *    AA  AA
 *    AA  AA
 *    	AA
 *    	BBB
 *    BB   BB
 *    BB   BB
 *    	BBB
 *    BB   BB
 *    BB   BB
 *    BB   BB
 *    	BBB
 *
 *        Created:  06/25/2014 13:24:10
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#define draw1(); for(j=0;j<vw;j++)\
			putchar(' ');\
		for(j=0;j<h2;j++)\
			putchar(c);\
		putchar('\n');
#define draw2(height); for(j=0;j<height;j++){\
			for(k=0;k<vw;k++)\
				putchar(c);\
			for(k=0;k<h2;k++)\
				putchar(' ');\
			for(k=0;k<vw;k++)\
				putchar(c);\
			putchar('\n');\
		}
int main(){
	int i,j,k,n,t;
	char c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		getchar();
		scanf("%c %d",&c,&t);
		int vw=t/6+1,h1=(t-3)/2,h2=t-3-h1;//vw为竖线宽度,h1为上圈高度,h2为下圈高度，也为第一行宽度
		draw1();
		draw2(h1);
		draw1();
		draw2(h2);
		draw1();
		printf("%s",(i==n-1)?"":"\n");
	}
	return 0;
}
