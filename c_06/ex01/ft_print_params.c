/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:03:41 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/19 13:41:18 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char *argv[])
{
	int count;
	int count2;

	count = 1;
	count2 = 0;
	if(argc > 0)
	{
		while(argv[count])
		{
			while(argv[count][count2])
			{
				write(1, &argv[count][count2], 1);
				count2++;
			}
			count++;
			count2 = 0;
			write(1, "\n", 1);
		}	
	}
}
