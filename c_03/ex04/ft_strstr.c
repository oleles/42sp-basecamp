/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:06:54 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/18 01:41:39 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcompare(char *phrase, char *to_find, unsigned int pos, unsigned int n)
{
	unsigned int	count;
	unsigned int	value;

	count = 0;
	value = 0;
	while (count < n)
	{
		if (phrase[pos] != to_find[count])
		{
			value = (phrase[pos] - to_find[count]);
		}
		pos++;
		count++;
	}
	return (value);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	value;

	count = 0;
	value = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[count])
	{ 
		if (str[count] == to_find[0])
		{
			value = ft_strcompare (str, to_find, count, ft_strlen(to_find));
			if (value == 0)
			{
				return (&str[count]);
			}
		}		
		count++;
	}
	return (0);
}
