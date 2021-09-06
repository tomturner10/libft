char *ft_strrchr(const char *s, int c)
{
	int i;
	char *o;

	o = '\0';
	i = 0;
	while (s[i] != "\0" )
	{
		if (s[i] == c)
			o = s[i];
		i++;
	}
	if (s[i] == c)
		o = s[i];
	return (o);
}