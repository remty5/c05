/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:19:19 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/11 20:07:09 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	n;

	while (1)
	{
		if (nb < 2)
		{
			nb++;
			continue ;
		}
		n = 2;
		while (n < nb)
		{
			if (nb % n++ == 0)
			{
				nb++;
				continue ;
			}
		}
		return (nb);
	}
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%s next %d\n", argv[1], ft_find_next_prime(atoi(argv[1])));
	else
		printf("Usage: %s <number>\n", argv[0]);
}*/
