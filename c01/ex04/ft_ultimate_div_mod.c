/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:15:54 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/14 19:50:29 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		a_temp;

	a_temp = *a;
	*a = (*a / *b);
	*b = (a_temp % *b);
}

/*
int main(void)
{
	int a = 10;
	int b = 5;
	printf("%d | %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d | %d\n", a, b);
	
	return 0;
}
*/