/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 23:36:39 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/14 16:59:16 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		a;
	int		temp;
	int		cont;

	cont = 0;
	while (cont < size - 1)
	{
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				temp = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = temp;
			}
			a++;
		}
		cont++;
	}
}

#include<stdio.h>
int main(void)
{
	int tab[] = {3, 1, 2, 10, 7, 4, 8, 9, 6, 5};
	int size = 10;
	
	//mostrando matriz antes
	int cont = 0;
	while(cont < size)
	{
		printf("%i, ", tab[cont]);
		cont++;
	}
	printf("\n");
	
	ft_sort_int_tab(tab, size);

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
