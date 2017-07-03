#include <unistd.h>
int my_isdigit(int p)
{
	if(48<=p && p<=58)
	{
		write(1,&"1\n",2);
	
	}
	else
	{
		write(1,"0\n",2);
	}
}

int main(void)
{
	my_isdigit('9');
	return (0);
}

