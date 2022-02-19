/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:15:48 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/17 20:18:29 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[count2])
	{
		dest[count] = src[count2];
		count2++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
