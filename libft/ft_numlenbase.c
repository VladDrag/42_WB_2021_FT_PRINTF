/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlenbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:19:14 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:56:58 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlenbase(unsigned long n, int base)
{
	int		counter;

	counter = 0;
	if (n == 0)
	{
		counter += 1;
		return (counter);
	}
	while (n > 0)
	{
		counter++;
		n /= base;
	}
	return (counter);
}
