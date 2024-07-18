/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 08:01:09 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/11 19:50:02 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc , char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'y') || (argv[1][i] >= 'a' && argv[1][i] <= 'y'))
			{
				argv[1][i] = argv[1][i] + 1;
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
			{
				argv[1][i] = argv[1][i] - 25;
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}

