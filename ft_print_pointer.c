/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:24:57 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:58:49 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_print_pointer(t_print *tab)
{
	unsigned long	i;
	int				j;

	j = 2;
	i = (unsigned long)va_arg(tab->args, void *);
	if (!i && tab->point && tab->precision > 0)
	{
		ft_print_null_pointer(tab);
		return ;
	}
	if (!(!i && tab->point))
		j += ft_numlenbase(i, 16);
	if (!tab->precision || tab->width > tab->precision)
	{
		ft_update_tab(tab, j);
		ft_right_duplicatex(tab);
	}
	else
		tab->precision = tab->precision + 2 - j;
	tab->total_length += write(1, "0x", 2);
	while (tab->precision-- > 0)
		tab->total_length += write(1, "0", 1);
	if (!(!i && tab->point))
		tab->total_length += ft_putnbrbase(i, "0123456789abcdef");
	ft_left_duplicatex(tab);
}

void	ft_print_null_pointer(t_print *tab)
{
	if (tab->width > tab->precision)
	{
		while (tab->width-- > (tab->precision + 2))
			tab->total_length += write(1, " ", 1);
	}
	tab->total_length += write(1, "0x", 2);
	while (tab->precision-- > 0)
		tab->total_length += write(1, "0", 1);
}

/*
**	In this file we have 2 functions:
**	ft_print_pointer - we use this function to print pointer and handle paddings
**	ft_print_null_pointer - handles edge cases where empty or null pointers need
**	to be handled
*/
