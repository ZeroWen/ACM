/*
 * =====================================================================================
 *
 *       Filename:  2024.c
 *
 *    Description:  
 *    roblem Description
 *    输入一个字符串，判断其是否是C的合法标识符。
 *    Input
 *    输入数据包含多个测试实例，数据的第一行是一个整数n,表示测试实例的个数，然后是n行输入数据，每行是一个长度不超过50的字符串。
 *    Output
 *    对于每组输入数据，输出一行。如果输入数据是C的合法标识符，则输出"yes"，否则，输出“no”。
 *    Sample Input
 *    3
 *    12ajf
 *    fi8x_a
 *    ff  ai_2
 *    Sample Output
 *    no
 *    yes
 *    no
 *
 *        Created:  04/18/2014 14:16:44
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <ctype.h>
int main(){
	int n,sign,i;
	char str[51];
	scanf("%d",&n);
	getchar();
	while(n--){
		gets(str);
		sign=0;
		if(isalpha(str[0])||str[0]=='_')
			sign=1;
		for(i=0;str[i]!='\0';i++)
			if(str[i]==' '||!(isalpha(str[i])||isdigit(str[i])||str[i]=='_'))
				sign=0;
		printf("%s\n",sign?"yes":"no");
	}
	return 0;
}
