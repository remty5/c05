/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:19:19 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/11 19:01:28 by rvandepu         ###   ########.fr       */
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
	while (n < nb)
		if (nb % n++ == 0)
			return (0);
	return (1);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("ft_is_prime(%s) = %d\n", argv[1], ft_is_prime(atoi(argv[1])));
	else
		printf("Usage: %s <number>\n", argv[0]);
}*/
