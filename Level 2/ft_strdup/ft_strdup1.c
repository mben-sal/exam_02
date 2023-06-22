#include<unistd.h>
#include<stdio.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	int len = 0;
	while (src[i])
		len++;
	char *dup = (char*)malloc(sizeof(char)*(len + 1));
	if(dup == NULL)
		return(NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return(dup);
}