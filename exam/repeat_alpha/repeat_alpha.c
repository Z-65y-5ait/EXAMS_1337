/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 05:36:05 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/11 07:38:01 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	index;
	int index_2;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				index = argv[1][i] - 'a';
				while (index > 0)
				{
					write(1 ,&argv[1][i], 1);
					index--;
				}
			}
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				index_2 = argv[1][i] - 'A';
				while (index_2 > 0)
				{
					write(1, &argv[1][i], 1);
					index_2--;
				}
			}
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
