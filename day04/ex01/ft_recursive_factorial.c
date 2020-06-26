/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:03:56 by amanenge          #+#    #+#             */
/*   Updated: 2020/06/26 14:22:47 by amanenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	if (nb > 12)
	   return (0);
	if (nb < 0)
		return (0);
	if (nb > 0)
		return(nb * ft_recursive_factorial(nb -1));
	else if(nb < 0)
		return(nb * ft_recursive_factorial(nb +1));
	else
		return(1);
}

