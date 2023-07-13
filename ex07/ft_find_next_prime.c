/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:19:19 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/13 16:17:55 by rvandepu         ###   ########.fr       */
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
			return (2);
		else if (nb % 2 == 0)
		{
			nb++;
			continue ;
		}
		n = 3;
		while (n <= nb / n)
		{
			if (nb % n == 0)
			{
				nb += 2;
				continue ;
			}
			n += 2;
		}
		return (nb);
	}
}

/*int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		while (1)
		{
			i = ft_find_next_prime(i);
			printf("found next prime: %d\n", i++);
		}
	}
	else if (argc == 2)
		printf("%s next %d\n", argv[1], ft_find_next_prime(atoi(argv[1])));
	else
		printf("Usage: %s <number>\n", argv[0]);
}*/
