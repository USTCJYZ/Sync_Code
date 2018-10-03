#include "BigNum.h" 
int main(void)
{
	for(int i=1;i<=10000;i++)
		for(int j=1;j<i;j++){
			BigNum b=i;
			int a=j;
			printf("%d/",a);b.print();
			while(b%a){
				BigNum p=b/a+1;
				int c=b%a;
				a=a-c;
				b=b*(c+1);
				if(j>1) putchar('+');putchar('1');putchar('/');p.print();
			}
			putchar('+');putchar('1');putchar('/');(b/a).print();putchar('\n');
		}
}
