/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:57:01 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/14 02:25:01 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		++i;
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char test[] = "hELLo WorLD";
	char *s = test;

	printf("%s\n", s);
	printf("%s\n", ft_strlowcase(s));

	return 0;
}
*/