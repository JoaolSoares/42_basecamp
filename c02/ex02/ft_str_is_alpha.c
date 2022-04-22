/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:24:39 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/19 02:35:48 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
	printf("%i\n", ft_str_is_alpha("Hello")); // alpha
	printf("%i\n", ft_str_is_alpha("H3110")); // not alpha 
	printf("%i\n", ft_str_is_alpha(""));      // alpha
	printf("%i\n", ft_str_is_alpha("hello                1")); // not alpha
	return 0;
}
*/