void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char * d;
	unsigned char * s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}