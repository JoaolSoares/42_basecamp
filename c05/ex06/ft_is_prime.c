/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:32:57 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/22 00:59:39 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		n;

	n = 1;
	if (nb <= 1)
		return (0);
	while (n <= nb / 2)
	{
		if ((nb % n) == 0 && n != 1)
			return (0);
		++n;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%i\n",ft_is_prime(89));
	return 0;
}
*/