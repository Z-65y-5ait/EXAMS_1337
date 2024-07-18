/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:54:53 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/15 22:32:23 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int j;

	if(argc > 1)
	{
		j = 1;
		while(j < argc)
		{
			i = 0;
			while(argv[j][i] != '\0')
			{
				if(argv[j][i] >= 'A' && argv[j][i] <= 'Z')
					argv[j][i] += 32;
				i++;
			}
			j++;
		}
		j = 1;
		while(j < argc)
		{
			i = 0;
			while(argv[j][i] != '\0')
			{
				if(((argv[j][i] >= 'a' && argv[j][i] <= 'z') && (argv[j][i + 1] == ' ' || argv[j][i + 1] == '\t'))
						|| ((argv[j][i] >= 'a' && argv[j][i] <= 'z') && (argv[j][i + 1] == '\0')))
				{
					argv[j][i] = argv[j][i] - 32;
					write(1, &argv[j][i], 1);
					i++;
				}
				else
				{
					write(1, &argv[j][i], 1);
					i++;
				}
			}
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
}
