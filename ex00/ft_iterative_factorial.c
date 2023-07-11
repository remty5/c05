/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:53:33 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/11 16:14:51 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
	{
		n = 1;
		while (nb > 1)
			n *= nb--;
		return (n);
	}
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%s! = %d\n", argv[1], ft_iterative_factorial(atoi(argv[1])));
	else
		printf("Usage: %s <number>\n", argv[0]);
}*/
