/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:23:32 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/10 23:14:45 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_check_equal_numbers(int a, int b, int c)
{
	if (c != a && c != b && a != b)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	hundred;
	int	dozen;
	int	unit;

	hundred = '0';
	dozen = '1';
	unit = '2';
	while (hundred <= '7')
	{
		while (dozen <= '8')
		{
			while (unit <= '9')
			{
				ft_check_equal_numbers(hundred, dozen, unit);
				unit++;
			}
			dozen++;
			unit = dozen + 1;
		}
		hundred++;
		dozen = hundred + 1;
		unit = dozen + 1;
	}
}
