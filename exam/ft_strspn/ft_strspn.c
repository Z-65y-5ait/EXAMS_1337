/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 22:13:18 by azaimi            #+#    #+#             */
/*   Updated: 2024/07/11 23:26:50 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t  ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;
	int founded;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		founded = 0;
		while(accept[j] != '\0')
		{
			if(s[i] == accept[j])
			{
				founded = 1;
				break;
			}
			j++;
		}
		if(!founded)
			break;
		i++;
	}
	return (i);
}

int main()
{
	printf("%zu\n",ft_strspn("rqchidouhcine","hcqre"));
}
