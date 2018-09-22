#define LOCAL
#include <stdio.h>
#define INF 1000000000
int main(){
	#ifdef LOCAL
		freopen("data.in","r",stdin);
		freopen("data.out","w",stdout);
	#endif
	int x,max=-INF,min=INF;
	while(scanf("%d",&x)==1){
		if(x<min) min=x;
		if(x>max) max=x;
	}
	printf("max=%d,min=%d",max,min);
	return 0;
} 
