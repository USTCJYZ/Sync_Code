#include <stdio.h>
#include <string.h>
int main(){
	char b[100];
	double t[100];
	t['C']=12.01,t['H']=1.008,t['N']=14.01,t['O']=16;
	int a,store=0;
	scanf("%d",&a);
	while(a--){
		scanf("%s",b);
		double n=0;
		int num,len=strlen(b);
		for(int i=0;i<len;){
			num=0;
			if(b[i]>='A'){
				if(i==len-1||b[i+1]>='A') n+=t[b[i]];
				else store=b[i]; 
				i++;
			}
			while(b[i]<='9'&&i<len){
				num*=10;
				num+=b[i]-'0';
				i++;
			}
			n+=(t[store]*num);
		}
		printf("%.3lf\n",n);
	}
	return 0;
}
