/*
 * =====================================================================================
 *
 *       Filename:  2560.c
 *
 *    Description:  
 *    We divide the HZNU Campus into N*M grids. As you can see from the picture below, the green grids represent the buidings. Given the size of the HZNU Campus, and the color of each grid, you should count how many green grids in the N*M grids.
 *    Input
 *    Standard input will contain multiple test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow. 
 *    The first line of each test case contains two integers n and m(1<=n,m<=100), the size of the campus. Then follow n lines, each line containing m integers. The j-th integer in the i-th line is the color of that grid, 0 stands for white color, while 1 stands for green.
 *    Output
 *    Results should be directed to standard output. For each case, output an integers T, the total green grids in the N*M size campus.
 *    Sample Input
 *    2
 *    2 2
 *    1 1
 *    0 0
 *    3 3
 *    1 0 1
 *    0 0 1
 *    1 1 0
 *    Sample Output
 *    2
 *    5
 *
 *        Created:  05/10/2014 21:49:33
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,m,i,j,k;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%d%d",&n,&m);
			for(i=k=0;i<n*m;k+=j,i++)
				scanf("%d",&j);
			printf("%d\n",k);
		}
	return 0;
}
