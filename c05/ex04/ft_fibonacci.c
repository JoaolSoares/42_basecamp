/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:55:50 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/21 18:35:01 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 0)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (-1);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_fibonacci(4));
	return 0;
}
*/