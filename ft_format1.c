/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:29:27 by taehykim          #+#    #+#             */
/*   Updated: 2022/03/30 18:51:58 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_p(void *ptr)
{
	char	*result;
	int		len;

	result = ft_dec_to_hex((unsigned long)ptr, 1);
	len = ft_strlen(result) + 2;
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(result, 1);
	free(result);
	result = NULL;
	return (len);
}

int	ft_format_c(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_format_s(char *s)
{
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	ft_format_d(int d)
{
	int		len;
	long	ret;

	len = 0;
	ft_putnbr_fd(d, 1);
	if (d == 0)
		return (1);
	ret = d;
	if (ret < 0)
	{
		len++;
		ret *= -1;
	}
	len += digit_count(ret);
	return (len);
}
