/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:49:32 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/15 16:05:22 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;

	i = 0;
	if (size != '\0')
	{
		while (src[i] != '\0')
		{
			if (i < size)
			{
				dest[i] = src[i];
			}
			++i;
		}
		dest[i] = '\0';
	}
	return (i);
}

/*
#include <stdio.h>
int main(void)
{
	char *src = "Hello World";
	char dest[100];
	unsigned int size = 5;
	
	int n = ft_strlcpy(dest, src, size);
	
	printf("%s\n%i\n%i\n", dest, size, n);
	
	return 0;
}
*/