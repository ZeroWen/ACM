/*
 * =====================================================================================
 *
 *       Filename:  2399.c
 *
 *    Description:  
 *    Problem Description
 *    Each course grade is one of the following five letters: A, B, C, D, and F. (Note that there is no grade E.) The grade A indicates superior achievement , whereas F stands for failure. In order to calculate the GPA, the letter grades A, B, C, D, and F are assigned the following grade points, respectively: 4, 3, 2, 1, and 0.
 *    Input
 *    The input file will contain data for one or more test cases, one test case per line. On each line there will be one or more upper case letters, separated by blank spaces.
 *    Output
 *    Each line of input will result in exactly one line of output. If all upper case letters on a particular line of input came from the set {A, B, C, D, F} then the output will consist of the GPA, displayed with a precision of two decimal places. Otherwise, the message "Unknown letter grade in input" will be printed.
 *    Sample Input
 *    A B C D F
 *    B F F C C A
 *    D C E F
 *    Sample Output
 *    2.00
 *    1.83
 *    Unknown letter grade in input
 *
 *    Created:  07/02/2014 15:18:02
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char a[1000];
	double gpa;
	int i,flag;
	while(gets(a)){
		gpa=0.0;
		for(i=flag=0;a[i]!='\0';i++)
			switch(a[i]){
				case 'A':gpa+=4.0;break;
				case 'B':gpa+=3.0;break;
				case 'C':gpa+=2.0;break;
				case 'D':gpa+=1.0;break;
				case 'F':gpa+=0.0;break;
				case ' ':break;
				default:flag=1;break;
			}
		if(flag)
			printf("Unknown letter grade in input\n");
		else
			printf("%.2lf\n",gpa/(double)((i+1)/2));
	}
	return 0;
}
