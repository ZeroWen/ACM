/*
 * =====================================================================================
 *
 *       Filename:  5082.c
 *
 *    Description:  
 *    There is a Love country with many couples of Darby and Joan in it. In order to commemorate their love, they will do some thing special when giving name to their offspring.
 *    When a couple want to give name to their offspring, they will firstly get their first names, and list the one of the male before the one of the female. Then insert the string “small” between their first names. Thus a new name is generated. For example, the first name of male is Green, while the first name of the female is Blue, then the name of their offspring is Green small Blue.
 *    You are expected to write a program when given the name of a couple, output the name of their offsping.
 *    Input
 *    Multi test cases (about 10), every case contains two lines.
 *    The first line lists the name of the male.
 *    The second line lists the name of the female.
 *    In each line the format of the name is [given name]_[first name].
 *    Please process to the end of file.
 *    [Technical Specification]
 *    3 ≤ the length of the name ≤ 20
 *    [given name] only contains alphabet characters and should not be empty, as well as [first name].
 *    Output
 *    For each case, output their offspring’s name in a single line in the format [first name of male]_small_[first name of female].
 *    Sample Input
 *    Jim_Green
 *    Alan_Blue
 *    Sample Output
 *    Green_small_Blue
 *
 *        Created:  03/17/2015 22:09:37
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char male[22],female[22],*mp,*fp;
	while(scanf("%s",male)!=EOF){
		scanf("%s",female);
		mp=male,fp=female;
		while(*mp!='_') mp++;
		while(*fp!='_') fp++;
		printf("%s_small_%s\n",++mp,++fp);
	}
	return 0;
}
