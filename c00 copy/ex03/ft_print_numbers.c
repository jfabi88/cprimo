/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:09:22 by jfabi             #+#    #+#             */
/*   Updated: 2020/11/26 19:20:11 by jfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	print;

	number = 0;
	while (number < 10)
	{
		print = number + 48;
		write(1, &print, 1);
		number++;
	}
}
