/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:44:04 by jeurico-          #+#    #+#             */
/*   Updated: 2022/02/19 13:41:21 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char *argv[])
{
	int count;

	count = 0;
	if(argc > 0)
	{
		while(argv[0][count])
		{
			write(1, &argv[0][count], 1);
			count++;	
		}
		write(1, "\n", 1);
	}
}
