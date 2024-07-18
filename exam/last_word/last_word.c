/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:53:40 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/12 12:40:05 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int len;
	int end;
	int first;

	if(argc == 2)
	{
		len = ft_strlen(argv[1]);
		while(len > 0 && (argv[1][len - 1] == '\t' || argv[1][len - 1] == ' '))
			len--;
		end = len;
		while(len > 0 && (argv[1][len - 1] != '\t' && argv[1][len - 1] != ' '))
			len--;
		first = len;
		while(first < end)
		{
			write(1, &argv[1][first], 1);
			first++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n",1);
}
