/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:19:19 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/12 19:18:48 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	if (nb < 1)
		return (0);
	n = 1;
	while (n * n != nb && n < nb / 2 && n < 46341)
		n++;
	if (n * n == nb)
		return (n);
	else
		return (0);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("ft_sqrt(%s) = %d\n", argv[1], ft_sqrt(atoi(argv[1])));
	else
		printf("Usage: %s <number>\n", argv[0]);
}*/
