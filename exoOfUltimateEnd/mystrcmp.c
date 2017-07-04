int mystrcmp(const char str1[], const char str2[])
{
	int i;
	int n;
	i=0;
	n=str1[i];
	int p;
	p=str2[i];
	while(str1[i]==str2[i])
	{
		i++;
	}
	return(n-p);
}
