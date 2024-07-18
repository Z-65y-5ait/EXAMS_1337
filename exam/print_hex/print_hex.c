/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 00:32:06 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/15 21:41:15 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] != '\0' && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	ft_putnbr_hexa(int nb)
{
	if (nb >= 16)
		ft_putnbr_hexa(nb / 16);
	ft_putchar("0123456789abcdef"[nb % 16]);
}

int main(int argc, char **argv)
{
	int	nb;

	if(argc ==2)
	{
		nb = ft_atoi(argv[1]);
		if(nb >= 0)
		{
			ft_putnbr_hexa(nb);
			ft_putchar('\n');
		}
		else
			ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
}
