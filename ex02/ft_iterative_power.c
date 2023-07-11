/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:53:33 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/11 17:56:55 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		n = 1;
		while (power > 0)
		{
			n *= nb;
			power--;
		}
		return (n);
	}
}

/*int	main(int argc, char *argv[])
{
	int	pow;

	if (argc == 3)
	{
		pow = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
		printf("(%s)^%s = %d\n", argv[1], argv[2], pow);
	}
	else
		printf("Usage: %s <number> <power>\n", argv[0]);
}*/
