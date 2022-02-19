/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:32:51 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/18 12:44:01 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;
	int	value;

	count = 0;
	value = 0;
	while (s1[count] || s2[count])
	{
		if (s1[count] != s2[count])
		{
			value = (s1[count] - s2[count]);
			return (value);
		}
		count++;
	}
	return (value);
}
