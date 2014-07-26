#include <stdio.h>
int main() {
	int m,n,t;
	while (scanf("%d%d",&m,&n)!=EOF) {
		if(m>n){
			t=m;
			m=n;
			n=t;
		}
		printf("%s\n",(m%2)?"Akshat":"Malvika");
	}
	return 0;
}