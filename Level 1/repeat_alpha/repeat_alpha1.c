#include<unistd.h>
#include<stdio.h>

int main(int ac , char **av)
{
	int i = 0;
	int n = 0;
	if(ac == 2)
	{
		while (av[1][i])
		{
			if((av[1][i] >= 'a' && av[1][i] <= 'z') )
			{
				n = av[1][i] - 'a';
				while (n >= 0)
				{
					write(1,&av[1][i],1);
					n--;
				}
			}
			else if((av[1][i] >= 'A' && av[1][i] <= 'Z') )
			{
				n = av[1][i] - 'A';
				while (n >= 0)
				{
					write(1,&av[1][i],1);
					n--;
				}
			}
			else 
				write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
}