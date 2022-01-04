/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:22:08 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 14:00:52 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrbase(unsigned long n, char *base)
{
	unsigned long	base_length;
	unsigned long	number;
	int				i;

	i = 1;
	number = n;
	base_length = ft_strlen(base);
	if (number == 0)
	{
		ft_putchar('0');
		return (i);
	}
	if (number >= base_length)
	{
		i += ft_putnbrbase(n / base_length, base);
		ft_putchar(base[number % base_length]);
	}
	else if (number < base_length)
	{
		ft_putchar(base[number]);
	}
	return (i);
}
