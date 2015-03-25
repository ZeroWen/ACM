/*
 * =====================================================================================
 *
 *       Filename:  4018.c
 *
 *    Description:  
 *    In computing, a Uniform Resource Locator or Universal Resource Locator (URL) is a character string that specifies where a known resource is available on the Internet and the mechanism for retrieving it.
 *    The syntax of a typical URL is:
 *    scheme://domain:port/path?query_string#fragment_id
 *    In this problem, the scheme, domain is required by all URL and other components are optional. That is, for example, the following are all correct urls:
 *    http://dict.bing.com.cn/#%E5%B0%8F%E6%95%B0%E7%82%B9
 *    http://www.mariowiki.com/Mushroom
 *    https://mail.google.com/mail/?shva=1#inbox
 *    http://en.wikipedia.org/wiki/Bowser_(character)
 *    ftp://fs.fudan.edu.cn/
 *    telnet://bbs.fudan.edu.cn/
 *    http://mail.bashu.cn:8080/BsOnline/
 *    Your task is to find the domain for all given URLs.
 *    Input
 *    There are multiple test cases in this problem. The first line of input contains a single integer denoting the number of test cases.
 *    For each of test case, there is only one line contains a valid URL.
 *    Output
 *    For each test case, you should output the domain of the given URL.
 *    Sample Input
 *    3
 *    http://dict.bing.com.cn/#%E5%B0%8F%E6%95%B0%E7%82%B9
 *    http://www.mariowiki.com/Mushroom
 *    https://mail.google.com/mail/?shva=1#inbox
 *    Sample Output
 *    Case #1: dict.bing.com.cn
 *    Case #2: www.mariowiki.com
 *    Case #3: mail.google.com
 *
 *        Created:  03/25/2015 23:43:33
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int cas=0,i,t,len,begin,end;
	char str[1000];
	scanf("%d",&t);
	for(;cas<t;++cas){
		scanf("%s",str);
		len=strlen(str);
		i=0;
		while(str[i]!=':')
			++i;
		i+=3;
		begin=i;
		while(str[i]!=':'&&str[i]!='/'&&i<len)
			++i;
		end=i;
		str[end]='\0';
		printf("Case #%d: %s\n",cas+1,str+begin);
	}
	return 0;
}
