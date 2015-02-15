#include <stdio.h>
#include <string.h>
int main(){
	char c,s[10000],quote[3];
	int i,len,t,quote_sign;
	for(i=0;~(c=getchar());)
		s[i++]=c;
	for(len=i,i=quote_sign=0;i<len;++i){
		t=s[i];
		if(t<0){
			printf("%c%c",s[i],s[i+1]);
			quote[0]=s[i];
			quote[1]=s[i+1];
			quote[2]='\0';
			if(!strcmp(quote,"”"))
				quote_sign=0;
			else if(!strcmp(quote,"“"))
				quote_sign=1;
			++i;
		}
		else if(t=='!')
			printf("！");
		else if(t==',')
			printf("，");
		else if(t=='?')
			printf("？");
		else if(t=='.')
			printf("。");
		else if(t=='"'){
			if(!quote_sign){
				printf("“");
				quote_sign=1;
			}
			else if(quote_sign){
				printf("”");
				quote_sign=0;
			}
		}
		else if(t=='<'&&s[i+1]=='<'){
			printf("《");
			++i;
		}
		else if(t=='>'&&s[i+1]=='>'){
			printf("》");
			++i;
		}
		else
			printf("%c",t);
	}
	return 0;
}