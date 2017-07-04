#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int mystrcmp(const char str1[],const char str2[])
{
	int i;
	int n;
	int x;
	i=0;
	n=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str2[n]!='\0')
	{
		n++;
	}
	x=i-n;
	return x;
}

int main(void)
{
	int d;
	char lol[]="f";
	char loul[]="sphsp";
	printf("%d\n",mystrcmp(lol,loul));
	return (0);
}
