/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 08:37:37 by jfabi             #+#    #+#             */
/*   Updated: 2020/11/27 08:49:34 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	numero(int nb)
{
	char	contatore;
	int		div;

	div = 1000000000;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb / div == 0)
	{
		div /= 10;
	}
	while (div >= 1)
	{
		contatore = (nb / div) + 48;
		write(1, &contatore, 1);
		nb -= (nb / div) * div;
		div /= 10;
	}
}
