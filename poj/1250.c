/*
 * =====================================================================================
 *
 *       Filename:  1250.c
 *
 *    Description:  
 *    Tan Your Hide, Inc., owns several coin-operated tanning salons. Research has shown that if a customer arrives and there are no beds available, the customer will turn around and leave, thus costing the company a sale. Your task is to write a program that tells the company how many customers left without tanning.
 *    The input consists of data for one or more salons, followed by a line containing the number 0 that signals the end of the input. Data for each salon is a single line containing a positive integer, representing the number of tanning beds in the salon, followed by a space, followed by a sequence of uppercase letters. Letters in the sequence occur in pairs. The first occurrence indicates the arrival of a customer, the second indicates the departure of that same customer. No letter will occur in more than one pair. Customers who leave without tanning always depart before customers who are currently tanning. There are at most 20 beds per salon.
 *    For each salon, output a sentence telling how many customers, if any, walked away. Use the exact format shown below.
 *    Sample Input
 *    2 ABBAJJKZKZ
 *    3 GACCBDDBAGEE
 *    3 GACCBGDDBAEE
 *    1 ABCBCA
 *    0
 *    Sample Output
 *    All customers tanned successfully.
 *    1 customer(s) walked away.
 *    All customers tanned successfully.
 *    2 customer(s) walked away.
 *
 *        Created:  04/28/2014 16:35:46
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,j,k,l,m;
	char c[100],d[27];
	while(scanf("%d",&n),n){
		getchar();
		scanf("%s",c);
		for(i=j=m=0;c[i]!='\0';i++){
			for(k=l=0;k<i;k++)
				if(c[k]==c[i]){
					l=1;
					break;
				}
			if(n!=0){
				if(!l){
					n--;
					d[m++]=c[i];
				}
				else{
					n++;
					for(k=0;k<m;k++)
						if(c[i]==d[k])
							d[k]='0';
				}
			}
			else{
				if(!l)
					j++;
				else{
					for(k=0;k<m;k++)
						if(c[i]==d[k])
							n++;
				}
			}
		}
		if(j)
			printf("%d customer(s) walked away.\n",j);
		else
			printf("All customers tanned successfully.\n");
	}
	return 0;
}
