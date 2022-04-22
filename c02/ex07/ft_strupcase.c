/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:16:24 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/14 02:25:36 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		++i;
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char test[] = "Hello wOrld";
	char *s = test;

	printf("%s\n", s);
	printf("%s\n", ft_strupcase(s));

	return 0;
}
*/