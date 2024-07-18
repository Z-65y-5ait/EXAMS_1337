/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 23:15:31 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/15 00:08:02 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;
	int len;

	len = 0;
	if(argc == 3)
	{
		while (argv[1][len])
			len++;
		i = 0;
		j = 0;
		while(argv[2][j] != '\0')
		{
			if(argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (i == len)
		{
			i = 0;
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}
