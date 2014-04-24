/*
 * =====================================================================================
 *
 *       Filename:  1235.c
 *
 *    Description:  
 *    Problem Description
 *    读入N名学生的成绩，将获得某一给定分数的学生人数输出。
 *    Input
 *    测试输入包含若干测试用例，每个测试用例的格式为
 *    第1行：N
 *    第2行：N名学生的成绩，相邻两数字用一个空格间隔。
 *    第3行：给定分数
 *    当读到N=0时输入结束。其中N不超过1000，成绩分数为（包含）0到100之间的一个整数。
 *    Output
 *    对每个测试用例，将获得给定分数的学生人数输出。
 *    Sample Input
 *    3
 *    80 60 90
 *    60
 *    2
 *    85 66
 *    0
 *    5
 *    60 75 90 55 75
 *    75
 *    0
 *    Sample Output
 *    1
 *    0
 *    2
 *    Hint
 *    Huge input, scanf is recommended.
 *
 *        Created:  04/24/2014 22:09:34
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,j,a[1000],b;
	while(scanf("%d",&n),n){
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		scanf("%d",&b);
		for(i=j=0;i<n;i++)
			if(a[i]==b)
				j++;
		printf("%d\n",j);
	}
	return 0;
}
