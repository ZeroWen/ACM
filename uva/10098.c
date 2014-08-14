#include <stdio.h>
#include <string.h>
char s[100];
void sort(int x,int y){
	int i,j;
	char t;
	for(i=x;i<y;i++)
		for(j=i+1;j<=y;j++)
			if(s[i]>s[j]){
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
}
int main(){
	int t,len,i,j,pos,min;
	char n;
	scanf("%d\n",&n);
	while(n--){
		gets(s);
		len=strlen(s);
		sort(0,len-1);
		puts(s);
		while(len){
			pos=len-1;
			while((pos>0)&&(s[pos]<=s[pos-1]))
				--pos;
			if(pos){
				min=pos;
				for(i=pos+1;i<len;i++)
					if((s[i]<s[min])&&(s[i]>s[pos-1]))
						min=i;
				t=s[pos-1];
				s[pos-1]=s[min];
				s[min]=t;
				sort(pos,len-1);
				puts(s);
			}
			else
				break;
		}
		printf("\n");
	}
	return 0;
}

