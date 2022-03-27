/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:29:27 by taehykim          #+#    #+#             */
/*   Updated: 2022/03/27 15:56:45 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_p(void *ptr)
{
	char	*result;
	int		len;

	result = ft_dec_to_hex((unsigned long)ptr, 1);
	len = ft_strlen(result + 2);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(result, 1);
	free(result);
	result = NULL;
	return (ft_strlen(result) + 2);
}

int	ft_format_c(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_format_s(char *s)
{
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	ft_format_d(int d)
{
	ft_putnbr_fd(d, 1);
	if (d == 0)
		return (1);
	return (ft_digit_count(d));
}
