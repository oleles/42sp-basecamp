/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:29:30 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/18 23:31:27 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	number;

	if (nb < 0)
	{
		ft_putchar ('-');
		number = -nb;
	}
	else
		number = nb;
	if (number > 9)
	{
		ft_putnbr (number / 10);
		number = ('0' + number % 10);
		ft_putchar (number);
	}
	else
	{
		ft_putchar ('0' + number);
	}
}
