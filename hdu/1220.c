/*
 * =====================================================================================
 *
 *       Filename:  1220.c
 *
 *    Description:  
 *    Problem Description
 *    Cowl is good at solving math problems. One day a friend asked him such a question: You are given a cube whose edge length is N, it is cut by the planes that was paralleled to its side planes into N * N * N unit cubes. Two unit cubes may have no common points or two common points or four common points. Your job is to calculate how many pairs of unit cubes that have no more than two common points.
 *    Process to the end of file.
 *    Input
 *    There will be many test cases. Each test case will only give the edge length N of a cube in one line. N is a positive integer(1<=N<=30).
 *    Output
 *    For each test case, you should output the number of pairs that was described above in one line.
 *    Sample Input
 *    1
 *    2
 *    3
 *    Sample Output
 *    0
 *    16
 *    297
 *    Hint
 *    The results will not exceed int type.
 *
 *        Created:  04/17/2014 16:12:23
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF)
		printf("%d\n",n*n*(n*n*n*n-7*n+6)/2);
	return 0;
}
