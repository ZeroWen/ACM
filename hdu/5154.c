/*
 * =====================================================================================
 *
 *       Filename:  5154.c
 *
 *    Description:  
 *    In reward of being yearly outstanding magic student, Harry gets a magical computer. When the computer begins to deal with a process, it will work until the ending of the processes. One day the computer got n processes to deal with. We number the processes from 1 to n. However there are some dependencies between some processes. When there exists a dependencies (a, b), it means process b must be finished before process a. By knowing all the m dependencies, Harry wants to know if the computer can finish all the n processes.
 *    Input
 *    There are several test cases, you should process to the end of file.
 *    For each test case, there are two numbers n m on the first line, indicates the number processes and the number of dependencies. 1≤n≤100,1≤m≤10000
 *    The next following m lines, each line contains two numbers a b, indicates a dependencies (a, b). 1≤a,b≤n
 *    Output
 *    Output one line for each test case. 
 *    If the computer can finish all the process print "YES" (Without quotes).
 *    Else print "NO" (Without quotes).
 *    Sample Input
 *    3 2
 *    3 1
 *    2 1
 *    3 3
 *    3 2
 *    2 1
 *    1 3
 *    Sample Output
 *    YES
 *    NO
 *
 *        Created:  05/16/2015 14:28:30
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#define MAX 110
int g[MAX][MAX],visit[MAX],flag,v,e;
int dfs(int i,int pre){
	visit[i]=1;
	int j;
	for(j=1;j<=v;j++)
		if(g[i][j]){
			if(!visit[j])
				return dfs(j,i);
			else
				return 0;
		}
	return 1;
}

int main(){
	int i,j,tv;
	while(scanf("%d%d",&v,&e)!=EOF){
		memset(g,0,sizeof(g));
		flag=1;
		while(e--){
			scanf("%d%d",&i,&j);
			if(i==j)
				flag=0;
			g[j][i]=1;
		}
		for(tv=0;tv<v;++tv){
			memset(visit,0,sizeof(visit));
			if(dfs(tv+1,tv)==0){
				flag=0;
				break;
			}
		}
		printf("%s\n",flag?"YES":"NO");
	}
	return 0;
}
