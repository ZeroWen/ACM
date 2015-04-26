/*
 * =====================================================================================
 *
 *       Filename:  3880.c
 *
 *    Description:  
 *    There is a popular multiplayer online battle arena game called Demacia of the Ancients. There are lots of professional teams playing this game. A team will be approved as Level K if there are exact K team members whose match making ranking (MMR) is strictly greater than 6000.
 *    You are given a list of teams. Please calculate the level of each team.
 *    Input
 *    There are multiple test cases. The first line of input contains an integer T indicating the number of test cases. For each test case:
 *    The first line contains an integer N (1 <= N <= 10) indicating the number of team members.
 *    The second line contains N integers representing the MMR of each team member. All MMRs are non-negative integers less than or equal to 9999.
 *    Output
 *    For each test case, output the level of the given team.
 *    Sample Input
 *    3
 *    5
 *    7986 6984 6645 6200 6150
 *    5
 *    7401 7377 6900 6000 4300
 *    3
 *    800 600 200
 *    Sample Output
 *    5
 *    3
 *    0
 *
 *        Created:  04/27/2015 00:45:01
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,tmp,count;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(count=0;n--;){
			scanf("%d",&tmp);
			if(tmp>6000)
				++count;
		}
		printf("%d\n",count);
	}
}
