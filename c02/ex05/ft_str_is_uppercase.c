/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:16:42 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/13 22:21:01 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			++i;
			continue ;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{	
	printf("%i\n", ft_str_is_uppercase("HELLO")); // upper
	printf("%i\n", ft_str_is_uppercase("hELLO")); // not upper
	printf("%i\n", ft_str_is_uppercase(""));      // upper
	printf("%i\n", ft_str_is_uppercase("HELL             o")); // not upper
	
	return 0;
}
*/