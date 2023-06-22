#include <unistd.h>
#include<stdio.h>
int main(int ac , char **av)
{
	int len = 0;
	int start = 0;
	int end = 0;
	int flag = 0;
	int i = 0;
	if(ac == 2)
	{
		while (av[1][len])
			len++;
		while (len >= 0)
		{
			while (av[1][len] == '\0' || av[1][len] == ' ' || av[1][len] == '\t')
				len--;
			end = len;
			while (av[1][len] != '\0' && av[1][len] != ' ' && av[1][len] != '\t') 
				len--;
			start = len + 1;
			flag = start;
			while (start <= end)
			{
				write(1,&av[1][start],1);
				start++;
			}
			if(flag != 0)
			{
				write(1," ",1);
			}
		}
	}
	write(1,"\n",1);
}
