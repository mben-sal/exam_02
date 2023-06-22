#include<unistd.h>
#include<stdio.h>

int ft_atoi(char *str)
{
	int sign = 1;
	int resu = 0;
	int i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 33))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || *str == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resu = resu * 10 + str[i] - '0';
		i++;
	}
	return(resu * sign);
}

void ft_putnbr(int nbr)
{
	char num;
	if( nbr > 9)
		ft_putnbr(nbr / 10);
	num = nbr % 10 + '0';
	write(1,&num,1);
}

int is_prime(int nbr)
{
	int i = 3;
	if(nbr <= 1)
		return(0);
	if (nbr % 2 == 0 && nbr > 2)
		return (0);
	while (i < (nbr / 2))
	{
		if(nbr % i == 0 )
			return(0);
		i +=2;
	}
	return(1);
}

int main(int ac , char **av)
{
	int sum = 0;
	int nbr = ft_atoi(av[1]);
	if(ac == 2 )
	{
		while (nbr > 0)
			if(is_prime(nbr--))
				sum += (nbr + 1);
		ft_putnbr(sum);
	}
	if(ac != 2)
		ft_putnbr(0);
	write(1,"\n",1);
	return(0);
}
