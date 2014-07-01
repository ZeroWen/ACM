/*
 * =====================================================================================
 *
 *       Filename:  2206.c
 *
 *    Description:  
 *    Problem Description
 *    在网络课程上，我学到了很多有关IP的知识。IP全称叫网际协议，有时我们又用IP来指代我们的IP网络地址，现在IPV4下用一个32位无符号整数来表示，一般用点分方式来显示，点将IP地址分成4个部分，每个部分为8位，表示成一个无符号整数（因此不需要用正号出现），如192.168.100.16，是我们非常熟悉的IP地址，一个IP地址串中没有空格出现（因为要表示成一个32数字）。
 *    但是粗心的我，常常将IP地址写错，现在需要你用程序来判断。
 *    Input
 *    输入有多个case，每个case有一行，不超过100个字符。
 *    Output
 *    对于每个case，判断输入的IP是否正确，如果正确输入YES，否则NO。
 *    Sample Input
 *    192.168.100.16
 *    Sample Output
 *    YES
 *
 *     Created:  07/02/2014 00:02:23
 *     Compiler:  gcc
 *
 *     Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int chartype(char c){
		if(c=='.')
				return 0;//dot
		else if(c<'0'||c>'9')
				return 1;//others
		else
				return 2;//number
}
int main(){
		char str[102];
		int i,flag,sign,tmp,dot,dig,type;
		while(gets(str)){	
				for(i=tmp=dot=dig=0,flag=1;str[i]!='\0';i++){
						type=chartype(str[i]);
						if(type==1){
								flag=0;
								break;
						}
						if(type==0){
								if(tmp>255||dig>3){
										flag=0;
										break;
								}
								sign=tmp=dig=0;
								++dot;
						}
						else{
								tmp=tmp*10+str[i]-'0';
								++dig;
						}
				}
				if(tmp>255||dig>3||dot!=3||chartype(str[0])!=2||chartype(str[i-1])!=2)
						flag=0;
				printf("%s\n",flag?"YES":"NO");
		}
		return 0;
}
