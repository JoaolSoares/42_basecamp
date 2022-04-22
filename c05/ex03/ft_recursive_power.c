/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 02:59:10 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/21 17:55:19 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int		result;

	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else if (power == 1)
		result = nb;
	else
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_recursive_power(5, 5));
	return 0;
}
*/