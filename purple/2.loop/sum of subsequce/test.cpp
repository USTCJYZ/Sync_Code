#include <stdio.h>
int main(){
	int n,m,kase=1;
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
	while(scanf("%d%d",&n,&m) && (n || m)){
		double s=0;
		for(long long i=n;i<=m;i++){
			s+=1.0/(i*i);
		}
		printf("Case %d: %.5f\n",kase,s);
		kase++;	
	}
	return 0;
} 
