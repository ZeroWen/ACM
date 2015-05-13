/*
 * =====================================================================================
 *
 *       Filename:  1210.c
 *
 *    Description:  
 *    Eddy是个ACMer,他不仅喜欢做ACM题,而且对于纸牌也有一定的研究,他在无聊时研究发现,如果他有2N张牌，编号为1,2,3..n,n+1,..2n。这也是最初的牌的顺序。通过一次洗牌可以把牌的序列变为n+1,1,n+2,2,n+3,3,n+4,4..2n,n。那么可以证明，对于任意自然数N，都可以在经过M次洗牌后第一次重新得到初始的顺序。编程对于小于100000的自然数N，求出M的值。
 *    Input
 *    每行一个整数N
 *    Output
 *    输出与之对应的M
 *    Sample Input
 *    20
 *    1
 *    Sample Output
 *    20
 *    2
 *
 *        Created:  05/13/2015 18:34:38
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int foo(int n){
	int i=2,count=1;
	while(i!=1){
		i=i*2%(n*2+1);
		++count;
	}
	return count;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF)
		printf("%d\n",foo(n));
	return 0;
}
