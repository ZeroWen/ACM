/*
 * =====================================================================================
 *
 *       Filename:  1443.c
 *
 *    Description:  
 *    Problem Description
 *    The Joseph's problem is notoriously known. For those who are not familiar with the original problem: from among n people, numbered 1, 2, . . ., n, standing in circle every mth is going to be executed and only the life of the last remaining person will be saved. Joseph was smart enough to choose the position of the last remaining person, thus saving his life to give us the message about the incident. For example when n = 6 and m = 5 then the people will be executed in the order 5, 4, 6, 2, 3 and 1 will be saved.
 *    Suppose that there are k good guys and k bad guys. In the circle the first k are good guys and the last k bad guys. You have to determine such minimal m that all the bad guys will be executed before the first good guy. 
 *    Input
 *    The input file consists of separate lines containing k. The last line in the input file contains 0. You can suppose that 0 < k < 14. 
 *    Output
 *    The output file will consist of separate lines containing m corresponding to k in the input file. 
 *    Sample Input
 *    3
 *    4
 *    0
 *    Sample Output
 *    5
 *    30
 *
 *        Created:  06/28/14 12:46:40
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */


#include <stdio.h>
int main(){
    int k;
	long a[14]={2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};
    while(scanf("%d",&k)!=EOF){
		if(!k)
			break;
		printf("%ld\n",a[k-1]);
    }
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
	long a[30],i,j,k,l,people,count;
	while(scanf("%ld",&k)!=0){
		if(!k)
			break;
		for(i=1;i<20000;i+=2){
			for(j=i*k;j<(i+1)*k;++j){
				for(l=0;l<k;++l)
					a[l]=-1;
				for(l=k;l<2*k;++l)
					a[l]=0;
				people=0;
				for(l=j,count=0,l%=2*k;a[l]!=-1;l%=2*k){
					if(a[l]==0){
						a[l]=1;
						++people;
						++l;
					}
					if(people==k)
						break;
					for(count=0;count<j;++l){
						l%=2*k;
						if(a[l]==-1||a[l]==0)
							++count;
					}
					while(a[l]==1)
						++l;
				}
				if(people==k)
					break;
			}
			if(people==k)
				break;
		}
		printf("%ld\n",1+j);
	}
	return 0;
}
*/
/*
 * 1 2
 * 2 7
 * 3 5
 * 4 30
 * 5 
 */
