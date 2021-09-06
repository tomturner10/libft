unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (size != 0)
		dest[i + j] = '\0';
	j = 0;
	while (src[j] != '\0')
		j++;
	return (i + j);
}
