/*
 * =====================================================================================
 *
 *       Filename:  2043.c
 *
 *    Description:  
 *    Problem Description
 *    网上流传一句话:"常在网上飘啊，哪能不挨刀啊～"。其实要想能安安心心地上网其实也不难，学点安全知识就可以。
 *    首先，我们就要设置一个安全的密码。那什么样的密码才叫安全的呢？一般来说一个比较安全的密码至少应该满足下面两个条件：
 *    (1).密码长度大于等于8，且不要超过16。
 *    (2).密码中的字符应该来自下面“字符类别”中四组中的至少三组。
 *    这四个字符类别分别为：
 *    1.大写字母：A,B,C...Z;
 *    2.小写字母：a,b,c...z;
 *    3.数字：0,1,2...9;
 *    4.特殊符号：~,!,@,#,$,%,^;
 *    给你一个密码，你的任务就是判断它是不是一个安全的密码。
 *    Input
 *    输入数据第一行包含一个数M，接下有M行，每行一个密码（长度最大可能为50），密码仅包括上面的四类字符。
 *    Output
 *    对于每个测试实例，判断这个密码是不是一个安全的密码，是的话输出YES，否则输出NO。
 *    Sample Input
 *    3
 *    a1b2c3d4
 *    Linle@ACM
 *    ^~^@^@!%
 *    Sample Output
 *    NO
 *    YES
 *    NO
 *
 *        Version:  1.0
 *        Created:  04/11/2014 22:53:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(){
	int n,i,a,b,c,d,sign;
	char str[50];
	while(scanf("%d",&n)!=EOF)
		while(n--){
			scanf("%s",str);
			for(i=a=b=c=d=0;str[i]!='\0';i++)
				if(str[i]>='A'&&str[i]<='Z')
					a++;
				else if(str[i]>='a'&&str[i]<='z')
					b++;
				else if(str[i]>='0'&&str[i]<='9')
					c++;
				else if(str[i]=='~'||str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='%'||str[i]=='^')
					d++;
			if((a*b*c||a*b*d||a*c*d||b*c*d)&&i>=8&&i<=16)
				sign=1;
			else
				sign=0;
			printf("%s\n",sign?"YES":"NO");
		}
	return 0;
}

