/*
 * =====================================================================================
 *
 *       Filename:  1547.c
 *
 *    Description:  
 *    Ms. Terry is a pre-school art teacher who likes to have her students work with clay. One of her assignments is to form a lump of clay into a block and then measure the dimensions of the block. However, in every class, there is always one child who insists on taking some clay from some other child. Since Ms. Terry always gives every child in a class the same amount of clay to begin with, you can write a program that helps Ms. Terry find the bully and victim after she measures each child's finished block.
 *    Input
 *    There are one or more classes of students, followed by a final line containing only the value -1. Each class starts with a line containing an integer, n, which is the number of students in the class, followed by n lines of student information. Each line of student information consists of three positive integers, representing the dimensions of the clay block, followed by the student's first name. There can never be more than 9 students nor less than 2 students in any class. Each student's name is at most 8 characters. Ms. Terry always gives each student at most 250 cubic units of clay. There is exactly one bully and one victim in each class.
 *    Output
 *    For each class print a single line exactly as shown in the sample output.
 *    Sample Input
 *    3
 *    10 10 2 Jill
 *    5 3 10 Will
 *    5 5 10 Bill
 *    4
 *    2 4 10 Cam
 *    4 3 7 Sam
 *    8 11 1 Graham
 *    6 2 7 Pam
 *    -1
 *    Sample Output
 *    Bill took clay from Will.
 *    Graham took clay from Cam.
 *
 *        Created:  05/02/2014 13:48:43
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,a,b,c,max,max_n,min,min_n;
	char name[9][9];
	while(scanf("%d",&n)!=EOF){
		if(n==-1)
			break;
		for(i=0;i<n;i++){
			scanf("%d%d%d %s",&a,&b,&c,name[i]);
			if(!i){
				max=min=a*b*c;
				max_n=min_n=0;
			}
			else{
				if(max<a*b*c){
					max=a*b*c;
					max_n=i;
				}
				if(min>a*b*c){
					min=a*b*c;
					min_n=i;
				}
			}
		}
		printf("%s took clay from %s.\n",name[max_n],name[min_n]);
	}
	return 0;
}