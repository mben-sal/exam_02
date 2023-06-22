#include<unistd.h>
#include<stdio.h>

int	    is_power_of_2(unsigned int n)
{
	int nbr = 1;

	while (nbr <= n)
	{
		if(nbr == n)
			return(1);
		nbr = nbr *2;
	}
	return(0);
}
