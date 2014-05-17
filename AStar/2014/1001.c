#include <stdio.h>
int main(){
	int t;
	long long n,m,v,k,i;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld%lld%lld",&n,&m,&v,&k);
		i=0;
		while(n>m){
			if((m-v)*k<=m){
				i=-1;
				break;
			}
			m=(m-v)*k;
			i++;
		}
		printf("%lld\n",i);
	}
	return 0;
}
