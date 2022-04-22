/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:56:59 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/20 18:26:25 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		n;
	int		is_negative;

	i = 0;
	n = 0;
	is_negative = 1;
	while (str[i] != '\0' && !(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			is_negative = -1;
		if (str[i] == '-' || str[i] == '+')
			++i;
	}	
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - 48);
		++i;
	}
	return (n * is_negative);
}

/*
#include<stdio.h>
int main(void)
{
	printf("%i", ft_atoi("---+--+1234ab567"));

	return 0;
}
//colocar a diferença de sinais par e impar de menos para modificar o valor
*/