/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:16:29 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/13 15:52:25 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int a, int b, int c, int d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if ((a !='9') || (b !='8'))
	{
		write (1, ", ", 2);	
	}
}

void	ft_check_numbers(int a, int b, int c, int d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_print_numbers(a, b, c, d);
					d ++;
				}
				c ++;
				d = '0';
			}
			b ++;
			d = b + 1;
			c = a;
		}
		a ++;
		c = a;
		b = '0';
		d = b + 1;
	}
}

void	ft_print_comb2(void)
{
	int	dozen_1;
	int	unit_1;
	int	dozen_2;
	int	unit_2;

	dozen_1 = '0';
	unit_1 = '0';
	dozen_2 = '0';
	unit_2 = '1';
	ft_check_numbers(dozen_1, unit_1, dozen_2, unit_2);
}
