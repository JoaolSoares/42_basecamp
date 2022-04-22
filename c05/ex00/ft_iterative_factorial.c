/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:24:05 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/22 00:42:16 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		fat;

	fat = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb != 1)
	{
		fat = fat * nb;
		--nb;
	}
	return (fat);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_iterative_factorial(3));
	return 0;
}
*/