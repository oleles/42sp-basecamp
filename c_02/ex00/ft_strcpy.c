/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:37:19 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/14 17:05:12 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (*(src + count))
	{
		*(dest + count) = *(src + count);
		count++;
	}
	*(dest + (count)) = '\0';
	return (dest);
}
