/*
 * =====================================================================================
 *
 *       Filename:  1243.c
 *
 *    Description:  
 *    In the early nineties, the World Wide Web (WWW) was invented. Nowadays, most people think that the WWW simply consists of all the pretty (or not so pretty) HTML-pages that you can read with your WWW browser. But back then, one of the main intentions behind the design of the WWW was to unify several existing communication protocols.
 *    Then (and even now), information on the Internet was available via a multitude of channels: FTP, HTTP, E-Mail, News, Gopher, and many more. Thanks to the WWW, all these services can now be uniformly addressed via URLs (Uniform Resource Locators). The syntax of URLs is defined in the Internet standard RFC 1738. For our problem, we consider a simplified version of the syntax, which is as follows:
 *    <protocol> "://" <host> [ ":" <port> ] [ "/" <path> ]
 *    The square brackets [] mean that the enclosed string is optional and may or may not appear. Examples of URLs are the following:
 *    http://www.informatik.uni-ulm.de/acm
 *    ftp://acm.baylor.edu:1234/pub/staff/mr-p
 *    gopher://veryold.edu
 *    More specifically,
 *    <protocol> is always one of http, ftp or gopher.
 *    <host> is a string consisting of alphabetic (a-z, A-Z) or numeric (0-9) characters and points (.).
 *    <port> is a positive integer, smaller than 65536.
 *    <path> is a string that contains no spaces.
 *    You are to write a program that parses an URL into its components.
 *    Input
 *    The input starts with a line containing a single integer n, the number of URLs in the input. The following n lines contain one URL each, in the format described above. The URLs will consist of at most 60 characters each.
 *    Output
 *    For each URL in the input first print the number of the URL, as shown in the sample output. Then print four lines, stating the protocol, host, port and path specified by the URL. If the port and/or path are not given in the URL, print the string <default> instead. Adhere to the format shown in the sample output.
 *    Print a blank line after each test case.
 *    Sample Input
 *    3
 *    ftp://acm.baylor.edu:1234/pub/staff/mr-p
 *    http://www.informatik.uni-ulm.de/acm
 *    gopher://veryold.edu
 *    
 *    Sample Output
 *    URL #1
 *    Protocol = ftp
 *    Host     = acm.baylor.edu
 *    Port     = 1234
 *    Path     = pub/staff/mr-p
 *    
 *    URL #2
 *    Protocol = http
 *    Host     = www.informatik.uni-ulm.de
 *    Port     = <default>
 *    Path     = acm
 *    
 *    URL #3
 *    Protocol = gopher
 *    Host     = veryold.edu
 *    Port     = <default>
 *    Path     = <default>
 *
 *        Created:  03/25/2015 22:55:04
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int i,j,n,len,ipr,iho,ipa,ipo;
	char str[70],protocol[70],host[70],port[10];
	scanf("%d",&n);
	for(i=0;i<n;++i){
		scanf("%s",str);
		len=strlen(str);
		j=ipr=iho=ipo=ipa=0;
		while(str[j]!=':')
			protocol[ipr++]=str[j++];
		protocol[ipr]='\0';
		j+=3;
		while(j<len&&str[j]!=':'&&str[j]!='/')
			host[iho++]=str[j++];
		host[iho]='\0';
		if(str[j]==':'){
			++j;
			while(str[j]>='0'&&str[j]<='9')
				port[ipo++]=str[j++];
		}
		port[ipo]='\0';
		if(j<len-1){
			ipa=1;
			j++;
		}
		printf("URL #%d\n",i+1);
		printf("Protocol = %s\n",protocol);
		printf("Host     = %s\n",host);
		printf("Port     = %s\n",ipo?port:"<default>");
		printf("Path     = %s\n\n",ipa?(str+j):"<default>");
	}
	return 0;
}
