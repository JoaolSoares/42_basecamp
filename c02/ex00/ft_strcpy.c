/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:33:22 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/13 21:44:14 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	char *src = "Hello World";
	char dest[100];
	
	ft_strcpy(dest, src);
	
	printf("%s\n", dest);
	
	return 0;
}
*/