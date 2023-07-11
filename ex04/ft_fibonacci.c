/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:53:33 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/11 18:18:33 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("index: %s\nelement: %d\n", argv[1], ft_fibonacci(atoi(argv[1])));
	else
		printf("Usage: %s <index>\n", argv[0]);
}*/
