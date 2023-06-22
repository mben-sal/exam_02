#include <stdlib.h>
int abs(int a)
{
	if(a < 0)
		a *= -1;
	return(a);
}
int     *ft_range(int start, int end)
{
	int i = 0;
	int len = abs(end - start)+ 1;
	int *res = malloc(sizeof(int)*len);

	while (i < len)
	{
		if(start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else {
			res[i] = start;
			start--;
			i++;
		}
	}
	return(res);
}
