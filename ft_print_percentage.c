/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percentage.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:24:53 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:58:46 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_print_percentage(t_print *tab)
{
	if (tab->percentage)
		tab->zero = 1;
	while (tab->zero && !tab->dash && --tab->width > 0)
		tab->total_length += write(1, "0", 1);
	while (!tab->dash && --tab->width > 0)
		tab->total_length += write(1, " ", 1);
	tab->total_length += write(1, "%", 1);
	while (--tab->width > 0)
		tab->total_length += write(1, " ", 1);
}

/*
**	In this file we have only one function:
**	ft_print_percentage - its main and only purpose is to print '%' sign.
*/
