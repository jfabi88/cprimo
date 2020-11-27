/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:54:41 by jfabi             #+#    #+#             */
/*   Updated: 2020/11/27 08:06:14 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	final_print(char one[2], char two[2])
{
	if (one[0] == '9' && one[1] == '8')
	{
		write(1, &one, 2);
		write(1, " ", 1);
		write(1, &two, 2);
	}
	else
	{
		write(1, &one, 2);
		write(1, " ", 1);
		write(1, &two, 2);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	char first[2];
	char second[2];

	first[0] = '0';
	first[1] = '0';
	while (first[0] <= '9')
	{
		second[0] = first[0];
		while (first[1] <= '9')
		{
			second[1] = first[1] + 1;
			while (second[0] <= '9')
			{
				while (second[1] <= '9')
				{
					final_print(first, second);
					second[1]++;
				}
				second[1] = '0';
				second[0]++;
			}
			second[0] = first[0];
			first[1]++;
		}
		first[1] = '0';
		first[0]++;
	}
}
