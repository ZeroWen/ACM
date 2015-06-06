/*
 * =====================================================================================
 *
 *       Filename:  1716.cc
 *
 *    Description:  
 *    Ray又对数字的列产生了兴趣：
 *    现有四张卡片，用这四张卡片能排列出很多不同的4位数，要求按从小到大的顺序输出这些4位数。
 *    Input
 *    每组数据占一行，代表四张卡片上的数字（0<=数字<=9），如果四张卡片都是0，则输入结束。
 *    Output
 *    对每组卡片按从小到大的顺序输出所有能由这四张卡片组成的4位数，千位数字相同的在同一行，同一行中每个四位数间用空格分隔。
 *    每组输出数据间空一行，最后一组数据后面没有空行。
 *    Sample Input
 *    1 2 3 4
 *    1 1 2 3
 *    0 1 2 3
 *    0 0 0 0
 *    Sample Output
 *    1234 1243 1324 1342 1423 1432
 *    2134 2143 2314 2341 2413 2431
 *    3124 3142 3214 3241 3412 3421
 *    4123 4132 4213 4231 4312 4321
 *
 *    1123 1132 1213 1231 1312 1321
 *    2113 2131 2311
 *    3112 3121 3211
 *
 *    1023 1032 1203 1230 1302 1320
 *    2013 2031 2103 2130 2301 2310
 *    3012 3021 3102 3120 3201 3210
 *
 *        Created:  06/06/2015 11:22:25
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <algorithm>

using namespace std;
bool cmp(char a,char b){
	if(tolower(a)==tolower(b))
		return a<b;
	else
		return tolower(a)<tolower(b);
}
int main(int argc, char *argv[]) {
	char str[5],head,tmp,first=1,firstnum;
	while(scanf("%c %c %c %c",&str[0],&str[1],&str[2],&str[3])!=EOF){
		str[4]='\0';
		if(!strcmp(str,"0000"))
			break;
		if(first)
			first=!first;
		else
			printf("\n");
		sort(str,str+4);
		head=str[0];
		firstnum=1;
		do{
			while(head=='0'){
				int i;
				for(i=1;i<strlen(str);++i)
					if(str[i]!='0')
						break;
				swap(str[0],str[i]);
				head=str[0];
			}
			tmp=str[0];
			if(firstnum){
				firstnum=!firstnum;
				printf("%s",str);
			}
			else{
				printf("%s%s",head==tmp?" ":"\n",str);
				if(head!=tmp)
					head=tmp;
			}
		}while(next_permutation(str, str+4, cmp));
		getchar();
		printf("\n");
	}
	return 0;
}
