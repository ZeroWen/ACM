/*
 * =====================================================================================
 *
 *       Filename:  2627.c
 *
 *    Description:  
 *    Samuel,Former Zua leader,was arrested and had to stay in prison during the Spring Festival. He was in custody for money laundering and other cases. 
 *    According to the report,Samuelwas alleged to have embezzled 104 million New Zua dollars (3.15million)inpublicfunds,acceptedbribesofabout9 million in a land purchase deal, and taken a kickback of $2.7 million from a construction project.
 *    Although Samuel is a smart lawyer,he was still arrested due to his illegal actions.
 *    Now Samuel has a question for you:If you are given the legislations of Zua,can you tell how many years he stay in the prison?
 *    The legislations of Zua are supposed as the following few lines:
 *    Input
 *    Input will contains 3 parts. There is an integer t in the first line meaning t test cases. Then the next line has 2 parts:n(represents the cases Samuel was accused with),s(a string with the length of n,only contains “0”,”1”.Here ‘0’means he was not accused with this case,and ‘1’means he was accused with this case ) .The next n lines have the numbers of New Zua dollars(the unit is million) he was accused with.
 *    Output
 *    According to the law,please output how many years Samuel will stay in the prison. Use the format”Samuel was accused with m case(s),and he will stay in the prison for c year(s).”Here m means the case number,c means the years he have to stay.
 *    Sample Input
 *    2
 *    3
 *    011
 *    10 5 15
 *    5
 *    01101
 *    1 10 10 100 31 
 *    Sample Output
 *    Samuel was accused with 2 case(s),and he will stay in the prison for 5 year(s).
 *    Samuel was accused with 3 case(s),and he will stay in the prison for 20 year(s).
 *
 *        Created:  05/12/2015 01:01:12
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int prison(int money){
	if(money==0)
		return 0;
	else{
		switch (money/10){
			case 0:return 3;
			case 1:return 3;
			case 2:return 5;
			case 3:return 10;
			case 4:return 15;
			case 5:return 20;
			case 6:return 25;
			case 7:return 30;
			case 8:return 35;
			default:return 40;
		}
	}
}
int main(){
	int t,n,i,a[1000],sum,count;
	char str[1000];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		scanf("%s",str);
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
		for(i=count=sum=0;i<n;++i)
			if(str[i]=='1'){
				++count;
				sum+=a[i];
			}
		printf("Samuel was accused with %d case(s),and he will stay in the prison for %d year(s).\n",count,prison(sum));
	}
	return 0;
}
