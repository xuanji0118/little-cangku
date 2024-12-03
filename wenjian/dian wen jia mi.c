#include<stdio.h>
int main()
{
	int d;
	while((d=getchar())!='\n')
	{
		if(d>='a'&&d<='w') d=d+3;
		else d=d-23;
		putchar(d);
	}
	putchar('\n');
}

