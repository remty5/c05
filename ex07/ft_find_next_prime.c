/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:19:19 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/26 20:15:06 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	if (nb < 2)
		return (0);
	n = 2;
	while (n <= nb / n)
		if (nb % n++ == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (ft_is_prime(nb) == 0)
		nb += 2;
	return (nb);
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
