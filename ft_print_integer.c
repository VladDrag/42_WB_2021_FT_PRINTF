/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:24:49 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 13:57:22 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_print_zero_point(t_print *tab)
{
	if (tab->precision < 0)
		tab->total_length += write(1, "0", 1);
	while (!tab->width && tab->precision-- > 0)
		tab->total_length += write(1, "0", 1);
}

void	ft_print_zero(t_print *tab)
{
	tab->is_zero = 1;
	if ((tab->width && tab->zero) || tab->point)
	{
		ft_right_zero_handler(tab);
		return ;
	}
	ft_update_tab(tab, 1);
	while (!tab->dash && --tab->width > 0)
		tab->total_length += write(1, " ", 1);
	tab->total_length += write(1, "0", 1);
	while (tab->dash && --tab->width > 0)
		tab->total_length += write(1, " ", 1);
}

void	ft_print_integer(t_print *tab)
{
	int		i;
	int		j;
	char	*num;
	int		len;

	i = 0;
	j = va_arg(tab->args, int);
	if (!j)
	{
		ft_print_zero(tab);
		return ;
	}
	if (j < 0)
		j = ft_sign_checker(tab, j);
	num = ft_itoa(j);
	if (!num)
		return ;
	len = ft_strlen(num);
	ft_update_tab(tab, len);
	ft_right_duplicatex(tab);
	while (j && num[i])
		tab->total_length += write(1, &num[i++], 1);
	ft_left_duplicatex(tab);
	free(num);
}

/*
**	In this file we have functions:
**	ft_print_integer - function handles printing integer values and padding
**	on both sides
**	ft_print_zero - print zeros if they are requested in format specifier
**	ft_print_zero_point - handles alignment and fills the space with 0
*/
