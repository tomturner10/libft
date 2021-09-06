char *ft_strrchr(const char *s, int c)
{
	int i;
	char *o;

	o = NULL;
	i = 0;
	while (s[i] != '\0' )
	{
		if (s[i] == c)
			o = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		o = (char *)&s[i];
	return (o);
}