/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:22:17 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/13 04:01:50 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
}

/*
int main(void)
{
	ft_putstr("lucas");
	return 0;
}
*/