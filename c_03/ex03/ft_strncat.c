/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:02:51 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/18 01:05:41 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int unsigned	count;
	int unsigned	count2;

	count = 0;
	count2 = 0;
	while (dest[count])
	{
		count++;
	}
	while (count2 < nb && src[count2] != '\0')
	{
		dest[count] = src[count2];
		count2++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
