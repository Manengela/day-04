/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:01:46 by amanenge          #+#    #+#             */
/*   Updated: 2020/06/26 13:59:44 by amanenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int y = 1;
	int x = 1;

	while(x < nb)
	{
	
		y *= (x + 1);
		x++;
	}
		return (y);
}

