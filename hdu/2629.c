/*
 * =====================================================================================
 *
 *       Filename:  2629.c
 *
 *    Description:  
 *    Do you own an ID card?You must have a identity card number in your family's Household Register. From the ID card you can get specific personal information of everyone. The number has 18 bits,the first 17 bits contain special specially meanings:the first 6 bits represent the region you come from,then comes the next 8 bits which stand for your birthday.What do other 4 bits represent?You can Baidu or Google it.
 *    However,in your card,maybe only 33 appears,0000 is replaced by other numbers.
 *    Here is Samuel's ID number 331004198910120036 can you tell where he is from?The first 2 numbers tell that he is from Zhengjiang Province,number 19891012 is his birthday date (yy/mm/dd).
 *    Input
 *    Input will contain 2 parts:
 *    A number n in the first line,n here means there is n test cases. For each of the test cases,there is a string of the ID card number.
 *    Output
 *    Based on the table output where he is from and when is his birthday. The format you can refer to the Sample Output.
 *    Sample Input
 *    1
 *    330000198910120036
 *    Sample Output
 *    He/She is from Zhejiang,and his/her birthday is on 10,12,1989 based on the table.
 *
 *        Created:  05/07/2015 00:52:13
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
char Place[8][2][12]={{"Zhejiang","33"},{"Beijing","11"},{"Taiwan","71"},{"Hong Kong","81"},{"Macao","82"},{"Tibet","54"},{"Liaoning","21"},{"Shanghai","31"}};
int getPlace(char *str){
	char tmp[20];
	strcpy(tmp,str);
	tmp[2]='\0';
	int i;
	for(i=0;i<8;++i){
		if(!strcmp(Place[i][1],tmp))
			return i;
	}
	return 0;
}
int main(){
	int n;
	char str[20];
	scanf("%d",&n);
	while(n--){
		scanf("%s",str);
		printf("He/She is from %s,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",Place[getPlace(str)][0],str[10],str[11],str[12],str[13],str[6],str[7],str[8],str[9]);
	}
	return 0;
}
