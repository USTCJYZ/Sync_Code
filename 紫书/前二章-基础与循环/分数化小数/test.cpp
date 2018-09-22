#include <stdio.h>
int main(){
	int a,b,c,kase=1,d[105];
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
	while(scanf("%d%d%d",&a,&b,&c) && (a || b || c)){
		for(int i=0;i<=c+1;i++){
			d[i]=int(a/b)+'0';
			a = a-int(a/b)*b;
			a*=10;
		}
		if(d[c+1]>'4') d[c]++;
		for(int i=c;i>=1;i--){
			if(d[i]>'9'){
				d[i]='0';
				d[i-1]++;
			}
		}
		printf("Case %d: %d",kase,d[0]-'0');
		if(c) printf(".");
		for(int i=1;i<=c;i++) printf("%c",d[i]);
		printf("\n");
		kase++;	
	}
	return 0;
} 
