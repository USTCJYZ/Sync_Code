#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
int main(){
	const char *name[]={"Ç®ÇíÁÕ","Àî³Ìãä","Àîéª","·®ĞÛ·É","Ò¦±ùĞÀ","ÄßÖ¾Ô¶"};
	srand((unsigned)time(NULL));
	printf("%s",name[rand()%6]);
	return 0;
} 
