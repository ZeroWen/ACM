/*
 * =====================================================================================
 *
 *       Filename:  2564.c
 *
 *    Description:  
 *    Problem Description
 *    定义：一个词组中每个单词的首字母的大写组合称为该词组的缩写。
 *    比如，C语言里常用的EOF就是end of file的缩写。
 *    Input
 *    输入的第一行是一个整数T，表示一共有T组测试数据；
 *    接下来有T行，每组测试数据占一行，每行有一个词组，每个词组由一个或多个单词组成；每组的单词个数不超过10个，每个单词有一个或多个大写或小写字母组成；
 *    单词长度不超过10，由一个或多个空格分隔这些单词。
 *    Output
 *    请为每组测试数据输出规定的缩写，每组输出占一行。
 *    Sample Input
 *    1
 *    end of file 
 *    Sample Output
 *    EOF
 *
 *        Version:  1.0
 *        Created:  04/11/2014 00:54:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,sign;
	char str[100];
	while(scanf("%d",&n)!=EOF){
		getchar();	//接收回车键
		while(n--){
			gets(str);
			for(i=0,sign=1;str[i]!='\0';i++){
				if(sign==1&&str[i]!=' '){
					if(str[i]>='a'&&str[i]<='z')
						putchar(str[i]-32);
					else
						putchar(str[i]);
					sign=0;
				}
				if(str[i]==' ')
					sign=1;
			}
			putchar('\n');
		}
	}
	return 0;
}

/*
 * 谨慎小心，考虑周全，一次通过
 * 和2026有点像，刚做完那个
 */
