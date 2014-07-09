/*
 * =====================================================================================
 *
 *       Filename:  1408.c
 *
 *    Description:  
 *
 *    Problem Description
 *    挂盐水的时候，如果滴起来有规律，先是滴一滴，停一下；然后滴二滴，停一下；再滴三滴，停一下...，现在有一个问题：这瓶盐水一共有VUL毫升，每一滴是D毫升，每一滴的速度是一秒（假设最后一滴不到D毫升，则花费的时间也算一秒），停一下的时间也是一秒这瓶水什么时候能挂完呢？
 *    Input
 *    输入数据包含多个测试实例，每个实例占一行，由VUL和D组成，其中 0<D<VUL<5000。
 *    Output
 *    对于每组测试数据，请输出挂完盐水需要的时间，每个实例的输出占一行。
 *    Sample Input
 *    10 1
 *    Sample Output
 *    13
 *
 *    Created:  06/28/14 01:05:08
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	double v,d;
	int i,t,k,sum;
	while(scanf("%lf%lf",&v,&d)!=EOF){
		t=0;
		sum=1;
		k=v/d;
		if(v/d-k>=0.000001)
			k+=1;
		for(i=2;sum<k;i++){
			t+=1;
			sum+=i;
		}
		t+=k;
		printf("%d\n",t);
	}
	return 0;
}
