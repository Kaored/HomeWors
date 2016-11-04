/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axalves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:55:21 by axalves           #+#    #+#             */
/*   Updated: 2016/11/04 14:39:28 by axalves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb >= 1 && nb <= 12)
	{
		return (nb * ft_recursive_factorial(nb -  1));
	}
	return (0);
}

int		main(void)
{
	printf("%d",ft_recursive_factorial(5));
	return (0);
}
