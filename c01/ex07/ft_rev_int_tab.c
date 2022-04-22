/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:25:56 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/15 17:50:53 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		a;
	int		b;
	int		temp;

	a = 0;
	b = size - 1;
	while (a < (size / 2))
	{
		temp = tab[a];
		tab[a] = tab[b];
		tab[b] = temp;
		a++;
		b--;
	}
}
/*
#include<stdio.h>
int main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = 10;
	
	//mostrando matriz antes
	int cont = 0;
	while(cont < size)
	{
		printf("%i, ", tab[cont]);
		cont++;
	}
	printf("\n");
	
	ft_rev_int_tab(tab, size);

	//mostrando matriz depois
	cont = 0;
	while(cont < size)
	{
		printf("%i, ", tab[cont]);
		cont++;
	}
	printf("\n");
	
	return 0;
}
*/