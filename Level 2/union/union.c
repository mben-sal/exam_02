#include <unistd.h>
#include<stdio.h>

int ft_strchar(char *str , int len)
{
	int i = 0;

	while (i < len && str[i]) 
	{
		if(str[i] == str[len])
			return(0);
		i++;
	}
	return(1);
}

int main (int ac , char **av)
{
	int j = 0;
	int i = 0;
	if(ac == 3)
	{
		while (av[1][i])
			i++;
		while (av[2][j])
		{
			av[1][i] = av[2][j];
			j++;
			i++;
		}
		i = 0;
		while (av[1][i])
		{
			if(ft_strchar(av[1],i))
			{
				write(1,&av[1][i],1);

			}
			i++;
		}
	}
	write(1,"\n",1);
}