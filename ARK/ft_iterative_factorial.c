/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axalves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:26:08 by axalves           #+#    #+#             */
/*   Updated: 2016/11/04 13:46:34 by axalves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int result;
	int count;

	if (nb >= 0 && nb <= 12)
	{
		result = 1;
		count = 0;
		while (nb > (count + 1))
		{
			result = result * (nb - count);
			count++;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}
