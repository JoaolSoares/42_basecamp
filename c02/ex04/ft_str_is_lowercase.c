/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:47:19 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/13 22:20:27 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	printf("%i\n", ft_str_is_lowercase("hello")); // lower
	printf("%i\n", ft_str_is_lowercase("Hello")); // not lower
	printf("%i\n", ft_str_is_lowercase(""));      // lower
	printf("%i\n", ft_str_is_lowercase("hell             O")); // not lower
	
	return 0;
}
*/