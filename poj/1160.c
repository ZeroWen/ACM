/*
 * =====================================================================================
 *
 *       Filename:  1160.c
 *
 *    Description:  
 *   There is a straight highway with villages alongside the highway. The highway is represented as an integer axis, and the position of each village is identified with a single integer coordinate. There are no two villages in the same position. The distance between two positions is the absolute value of the difference of their integer coordinates.
 *   Post offices will be built in some, but not necessarily all of the villages. A village and the post office in it have the same position. For building the post offices, their positions should be chosen so that the total sum of all distances between each village and its nearest post office is minimum.
 *   You are to write a program which, given the positions of the villages and the number of post offices, computes the least possible sum of all distances between each village and its nearest post office.
 *   Input
 *   Your program is to read from standard input. The first line contains two integers: the first is the number of villages V, 1 <= V <= 300, and the second is the number of post offices P, 1 <= P <= 30, P <= V. The second line contains V integers in increasing order. These V integers are the positions of the villages. For each position X it holds that 1 <= X <= 10000.
 *   Output
 *   The first line contains one integer S, which is the sum of all distances between each village and its nearest post office.
 *   Sample Input
 *   10 5
 *   1 2 3 6 7 9 11 22 44 50
 *   Sample Output
 *   9
 *
 *        Created:  03/23/2015 19:36:43
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */


#include <stdio.h>
#define inf 0x7ffffff
int dp[301][31];//dp[i][j]表示前i个村庄放j个邮局的最短距离
int w[301][301];//w[i][j]表示[i,j]的最小距离
int val[301];
int s[301][31];//s[i][j]记录前j-1个邮局的村庄数
int main(){
	int n,m,i,j,k;
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=1;i<=n;i++)
			scanf("%d",&val[i]);
		for(i=1;i<=n;i++){ //这里有一个递推公式可以进行预处理
			w[i][i]=0;
			for(j=i+1;j<=n;j++)
				w[i][j]=w[i][j-1]+val[j]-val[(j+i)/2];
		}
		for(i=1;i<=n;i++){
			dp[i][1]=w[1][i];
			s[i][1]=0;
		}
		for(i=2;i<=m;i++){
			s[n+1][i]=n; //s[][]上限的初始化
			for(j=n;j>i;j--){ //决策量s[i][j]已经是缩短了搜索的范围
				dp[j][i]=inf;
				/*在s[i-1][j]到s[i][j+1]的范围内枚举k值,
				 * 计算前k个村庄建立一个i-1个邮局、第k+1个村庄~第j个村庄建立一个
				 * 邮局的距离和.若该距离为目前最小,则记下方案.*/
				for(k=s[j][i-1];k<=s[j+1][i];k++){
					int tmp=dp[k][i-1]+w[k+1][j];
					if(tmp<dp[j][i]){
						dp[j][i]=tmp;
						s[j][i]=k;
					}
				}
			}
		}
		printf("%d\n",dp[n][m]);
	}
	return 0;
}
