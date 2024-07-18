/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:44:37 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/17 22:24:38 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen_int(int nb)
{
	int	i;

	if(nb == 0)
		return(1);
	if(nb < 0)
		nb = -nb;
	i = 0;
	while(nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int		i;
	char	*str;
	int		len_i;

	len_i = ft_strlen_int(nbr);
	str = (char *)malloc(sizeof(char *) * (len_i + 1));
	if (!str)
		return (NULL);
	str[len_i + 1] = '\0';
	if(nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
		i = len_i;
		while(nbr > 0 && i > 0)
		{
			str[i] = nbr % 10 + '0';
			nbr = nbr / 10;
			i--;
		}
	}
	else if(nbr > 0)
	{
		i = len_i - 1;
		while(nbr > 0)
		{
			str[i] = nbr % 10 + '0';
			nbr = nbr / 10;
			i--;
		}
	}
	else if (nbr == 0)
		str[0] = '0';
	return (str);
}

void	test_itoa(int nbr)
{
	char	*result = ft_itoa(nbr);
	if (result)
	{
		printf("ft_itoa(%d) = %s\n", nbr, result);
		free(result);
	}
	else
	{
		printf("ft_itoa(%d) failed to allocate memory.\n", nbr);
	}
}

int	main()
{
	// Positive Numbers
	test_itoa(123);
	test_itoa(4567);
	test_itoa(987654321);

	// Negative Numbers
	test_itoa(-123);
	test_itoa(-4567);
	test_itoa(-987654321);

	// Zero
	test_itoa(0);

	// Small Positive Numbers
	test_itoa(7);
	test_itoa(1);
	test_itoa(10);

	// Edge Cases
	test_itoa(-2147483648); // Minimum 32-bit signed integer
	test_itoa(2147483647);  // Maximum 32-bit signed integer

	// Single Digit Numbers
	test_itoa(5);
	test_itoa(-5);

	// Repeating Digit Numbers
	test_itoa(1111);
	test_itoa(-2222);

	// Power of Ten
	test_itoa(1000);
	test_itoa(1000000);
	test_itoa(-1000);
	test_itoa(-1000000);

	return 0;
}
