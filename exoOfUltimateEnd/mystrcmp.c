int mystrcmp(const char str1[], const char str2[])
{
	int i;
	int n;
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
	return(i-n);
}
