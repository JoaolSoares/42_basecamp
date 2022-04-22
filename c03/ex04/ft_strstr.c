/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:09:40 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/20 00:54:02 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = 0;
	while (to_find[size] != '\0')
		++size;
	if (size == 0)
		return (str);
	while (str[i] != '\0' || to_find[j] != '\0')
	{
		while (str[i] == to_find[j] && j < size)
		{
			if (j == size - 1)
				return (to_find);
			++i;
			++j;
		}
		j = 0;
		++i;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char *str1 = "Hello World";
	char *to_find = "alsdkçjf";

	printf("%s", ft_strstr(str1, to_find));
	return 0;
}
*/