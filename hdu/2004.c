/*
 * =====================================================================================
 *
 *       Filename:  2004.c
 *
 *    Description:
 *    Problem Description
 *    输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下：
 *    90~100为A;
 *    80~89为B;
 *    70~79为C;
 *    60~69为D;
 *    0~59为E;
 *
 *    Input
 *    输入数据有多组，每组占一行，由一个整数组成。
 *
 *    Output
 *    对于每组输入数据，输出一行。如果输入数据不在0~100范围内，请输出一行：“Score is error!”。
 *
 *    Sample Input
 *    56
 *    67
 *    100
 *    123
 *
 *    Sample Output
 *    E
 *    D
 *    A
 *    Score is error!
 *    
 *
 *        Version:  1.0
 *        Created:  04/07/2014 23:23:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int score;
	while(scanf("%d",&score)!=EOF)
		if(score<0||score>100)
			printf("Score is error!\n");
		else
			switch(score/10){
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:printf("E\n");break;
				case 6:printf("D\n");break;
				case 7:printf("C\n");break;
				case 8:printf("B\n");break;
				case 9:
				case 10:printf("A\n");break;
			}
	return 0;
}
