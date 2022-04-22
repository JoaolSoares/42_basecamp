/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:44:07 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/21 03:13:53 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		power_temp;

	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || power == 0)
		return (1);
	i = 1;
	power_temp = nb;
	while (i < power)
	{
		nb *= power_temp;
		++i;
	}
	return (nb);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_iterative_power(5, 5));
	return 0;
}
*/