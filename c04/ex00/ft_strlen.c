/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:34:25 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/19 18:04:38 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		n;

	n = 0;
	while (str[n] != '\0')
		++n;
	return (n);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%i", ft_strlen("hello world"));
	return 0;
}
*/