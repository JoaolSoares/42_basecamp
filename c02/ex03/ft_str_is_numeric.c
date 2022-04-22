/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:36:24 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/13 21:46:31 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
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
	printf("%i\n", ft_str_is_numeric("1337")); // numeric
	printf("%i\n", ft_str_is_numeric("Hello")); // not numeric
	printf("%i\n", ft_str_is_numeric(""));      // numeric
	printf("%i\n", ft_str_is_numeric("014             1")); // not numeric
	
	return 0;
}
*/