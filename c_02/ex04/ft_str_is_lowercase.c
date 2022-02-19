/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:31:46 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/14 19:36:08 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (*(str + c))
	{
		if ((str[c] < 'a' || str[c] > 'z'))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
