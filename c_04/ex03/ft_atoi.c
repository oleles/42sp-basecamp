/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:12:35 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/19 02:13:42 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_verify_string(char *str, int *val, int *s)
{
	int	c;

	c = 0;
	while (str[c]
		&& ((str[c] < 'A' || str[c] > 'Z') && (str[c] < 'a' || str[c] > 'z')))
	{
		if (str[c] == ' ' || str[c] == '\f' || str[c] == '\n'
			|| str[c] == '\r' || str[c] == '\t' || str[c] == '\v'
			|| str[c] == '	' || str[c] == '+')
			c++;
		else if (str[c] == '-')
		{
			*s = *s + 1;
			c++;
		}
		else
		{
			*val = ((*val) * 10) + str[c] - 48;
			c++;
		}
	}
}

int	ft_change_sin(int *val, int *sin)
{
	if (*sin % 2 != 0)
	{
		*val = (*val) * -1;
	}
	return (*val);
}

int	ft_atoi(char *str)
{
	int	value;
	int	sin;

	value = 0;
	sin = 0;
	ft_verify_string(str, &value, &sin);
	return (ft_change_sin(&value, &sin));
}
