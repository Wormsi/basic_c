#include <unistd.h>

int my_isnumeric(char p)
{
	if(p==37 || p==61 || p<=57 && p>=40)
	{
		return (0);
	}
	else 
	{
		return (1);
	}
}

int main(void)
{
	int n;
	n=my_isnumeric('l')+48;
	write(1,&n,1);
	return (0);
}
