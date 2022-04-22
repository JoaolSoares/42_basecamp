/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:26:02 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/12 19:15:40 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*
int main(void)
{
	int a = 10;
	int b = 3;
	int div;
	int mod;
	printf("%d | %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("%d | %d\n", div, mod);
	
	return 0;
}
*/