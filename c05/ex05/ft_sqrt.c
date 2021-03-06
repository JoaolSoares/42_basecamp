/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:36:25 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/21 18:36:54 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		n;

	n = 1;
	while (n < 46341 && (n * n) <= nb)
	{
		if ((n * n) == nb)
			return (n);
		++n;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_sqrt(9));
	return 0;
}*/