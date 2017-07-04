#include <stdio.h>
int mystrcmp(const char str1[],const char str2[]);
int main(void)
{
	char lol[]="sal";
	char loul[]="salut";
	printf("%d\n",mystrcmp(lol,loul));
	return(0);
}

