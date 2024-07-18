/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:52:36 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/11 20:23:18 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	if(argc == 4)
	{
		while(argv[2][j] && argv[3][k])
		{
			j++;
			k++;
		}
		if(j == 1 && k == 1)
		{
			while(argv[1][i] != '\0')
			{
				if(argv[1][i] == argv[2][0])
				{
					write(1, &argv[3][0], 1);
					i++;
				}
				write(1, &argv[1][i], 1);
				i++;
			}
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
