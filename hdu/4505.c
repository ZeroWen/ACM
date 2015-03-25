/*
 * =====================================================================================
 *
 *       Filename:  4505.c
 *
 *    Description:  
 *    小Ｑ便在陪伴女神的同时，也关注着电梯中显示的楼层数字，并且他注意到电梯每向上运行一层需要６秒钟，向下运行一层需要4秒钟，每开门一次需要５秒（如果有人到达才开门），并且每下一个人需要加１秒。
 *    特别指出，电梯最开始在０层，并且最后必须再回到０层才算一趟任务结束。假设在开始的时候已知电梯内的每个人要去的楼层，你能计算出完成本趟任务需要的总时间吗?
 *    这是个很简单的问题，要知道，小Q已经修炼到快速心算出结果的境界，现在你来编程试试吧！
 *    Input
 *    输入首先包含一个正整数C，表示有C组测试用例。
 *    接下来C行每行包含一组数据，每组数据首先是一个正整数N，表示本次乘坐电梯的人数，然后是N个正整数Ai，分别表示大家要去的楼层。
 *    [Technical Specification]
 *    C<=100
 *    N<=15
 *    Ai<=100
 *    Output
 *    请计算并输出完成一趟任务需要的时间，每组数据输出占一行。
 *    Sample Input
 *    2
 *    4 2 4 3 2
 *    3 10 10 10
 *    Sample Output
 *    59
 *    108
 *
 *        Created:  03/25/2015 19:47:33
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int c,n,i,a[110],tmp,count,max;
	scanf("%d",&c);
	while(c--){
		memset(a,0,sizeof(a));
		scanf("%d",&n);
		for(i=max=count=0;i<n;++i){
			scanf("%d",&tmp);
			if(!a[tmp])
				count++;
			a[tmp]=1;
			if(max<tmp)
				max=tmp;
		}
		printf("%d\n",max*10+n+count*5);
	}
	return 0;
}
