/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:55:57 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/14 21:20:21 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int	S;
	int	nb;

	if(argc == 2)
	{
		nb = ft_atoi(argv[1]);
		if(nb > 0)
		{
			S = 0;
			while (nb > 1)
			{
				if(ft_is_prime(nb))
					S = S + nb;
				nb--;
			}
			ft_putnbr(S);
			ft_putchar('\n');
		}
		else
			write(1, "0\n", 2);
	}
	else
		write(1, "0\n", 2);
}
