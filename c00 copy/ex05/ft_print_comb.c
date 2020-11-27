/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combinazioni.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:42:29 by jfabi             #+#    #+#             */
/*   Updated: 2020/11/26 20:51:01 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char combinazione[5];

	combinazione[0] = '0';
	combinazione[1] = '1';
	combinazione[2] = '2';
	combinazione[3] = ',';
	combinazione[4] = ' ';
	while (combinazione[0] < '7')
	{
		while (combinazione[1] <= '8')
		{
			while (combinazione[2] <= '9')
			{
				write(1, &combinazione, 5);
				combinazione[2]++;                                                                                       
			}
			combinazione[2] = ++combinazione[1] + 1;
		}
		combinazione[1] = ++combinazione[0];
		combinazione[2] = combinazione[1] + 1;
	}
	write(1, &combinazione, 3);
}
