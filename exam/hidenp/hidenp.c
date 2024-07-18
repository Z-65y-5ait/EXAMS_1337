/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 00:09:16 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/15 00:15:05 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	if(argc == 3)
	{
		len = 0;
		while(argv[1][len] != '\0')
			len++;
		i = 0;
		j = 0;
		while(argv[2][j] != '\0')
		{
			if(argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if(i == len)
			write(1, "1\n", 2);
		else
			write(1, "0\n", 2);
	}
	else
		write(1, "\n", 1);
}
