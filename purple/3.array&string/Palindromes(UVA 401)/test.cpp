#include <cstdio>
#include <cstring>
#include <ctype.h>
const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char* msg[] = {"is not a palindrome","is a regular palindrome","is a mirrored string","is a mirrored palindrome"};
char r(char ch){
	if(isalpha(ch)) return rev[ch-'A'];
	else return rev[ch-'0'+25];
} 
int main(){
	char s[30];
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	while(scanf("%s",s)==1){
		int len=strlen(s),p=1,m=1;
		for(int i=0;i<len/2;i++){
			if(s[i]!=s[len-1-i]) p=0;
			if(r(s[i])!=s[len-1-i]) m=0;
		}
		printf("%s -- is %s.\n\n",s,msg[p+2*m]);
	}
	return 0;
}
