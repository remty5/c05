/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:53:33 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/12 19:16:49 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}

/*int	main(int argc, char *argv[])
{
	int	pow;

	if (argc == 3)
	{
		pow = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
		printf("(%s)^%s = %d\n", argv[1], argv[2], pow);
	}
	else
		printf("Usage: %s <number> <power>\n", argv[0]);
}*/
