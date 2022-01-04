/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_alignment.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:24:29 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:58:59 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_right_duplicatex(t_print *tab)
{
	if (tab->space_flag)
		tab->total_length += write(1, " ", 1);
	if (tab->sign
		&& (tab->zero || tab->dash || (!tab->width && !tab->precision)))
	{
		tab->total_length += write(1, "-", 1);
		tab->sign = 0;
	}
	if (!tab->dash)
	{
		while (!tab->zero && --tab->width > -1)
			tab->total_length += write(1, " ", 1);
		while (tab->zero && --tab->width > -1)
			tab->total_length += write(1, "0", 1);
		if (tab->sign)
			tab->total_length += write (1, "-", 1);
	}
	while (--tab->precision > -1)
		tab->total_length += write(1, "0", 1);
}

void	ft_left_duplicatex(t_print *tab)
{
	if (tab->dash)
	{
		while (tab->dash && tab->zero && --tab->precision > -1)
			tab->total_length += write(1, "0", 1);
		while (tab->dash && --tab->width > -1)
			tab->total_length += write(1, " ", 1);
	}
}

void	ft_right_character_handler(t_print *tab, int len)
{
	while (tab->zero && tab->width-- > len)
		tab->total_length += write(1, "0", 1);
	if (!tab->zero && tab->precision && tab->precision < len)
		while (tab->width-- > tab->precision)
			tab->total_length += write(1, " ", 1);
	else
		while (!tab->zero && tab->width-- > len)
			tab->total_length += write(1, " ", 1);
}

void	ft_left_character_handler(t_print *tab, int len)
{
	while (tab->zero && tab->width-- > len)
		tab->total_length += write(1, "0", 1);
	while (!tab->zero && tab->width-- > len)
		tab->total_length += write(1, " ", 1);
}

void	ft_right_zero_handler(t_print *tab)
{
	if (tab->width && (tab->point || tab->zero))
	{
		if (!tab->precision)
		{
			while (tab->zero && tab->width-- > 0)
				tab->total_length += write(1, "0", 1);
			while (!tab->zero && tab->width-- > 0)
				tab->total_length += write(1, " ", 1);
		}
		else
		{
			tab->width -= tab->precision;
			while (tab->dash && tab->precision-- > 0)
				tab->total_length += write(1, "0", 1);
			while (tab->width-- > 0)
				tab->total_length += write(1, " ", 1);
			while (!tab->dash && tab->precision-- > 0)
				tab->total_length += write(1, "0", 1);
		}
	}
	else if (tab->point)
		ft_print_zero_point(tab);
}

/*
**	This file contains funcions:
**	ft_right_zero_handler - is used for handling zeros on the right side
**	ft_left_character_handler - left character handler
**	ft_right_character_handler - left character handler
**	ft_left_duplicatex - left character duplicate
**	ft_right_duplicatex - right character duplicate
*/
