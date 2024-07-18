/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 05:22:11 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/14 05:58:31 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
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

int main(int argc, char **argv)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0' && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i++;
		while(argv[1][i])
		{
			if((argv[1][i] == ' ' || argv[1][i] == '\t') && ((argv[1][i + 1] != ' ' || argv[1][i + 1] != '\t') && argv[1][i + 1] != '\0'))
				count++;
			i++;
		}
		ft_putnbr(count);
	}
	write(1, "\n", 1);
}
