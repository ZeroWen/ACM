#include <stdio.h>
int main() {
	int m,n,i,j,a[102];
	while (scanf("%d%d",&n,&m)!=EOF) {
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(j=0;j<n;)
			for(i=0;i<n;i++){
				if(a[i]<=0)
					continue;
				a[i]-=m;
				if(a[i]<=0)
					++j;
				if(j==n)
					break;
			}
		printf("%d\n",i+1);
	}
	return 0;
}