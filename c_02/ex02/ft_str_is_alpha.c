/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:13:44 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/14 19:07:40 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (*(str + c))
	{
		if ((str[c] < 'A' || str[c] > 'Z' ) && (str[c] < 'a' || str[c] > 'z'))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
