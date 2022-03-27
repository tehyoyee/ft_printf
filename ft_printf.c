/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:04:34 by taehykim          #+#    #+#             */
/*   Updated: 2022/03/27 15:43:34 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...);

int	ft_print_format_specifier(va_list ap, char c)
{
	if (c == 'c')
		return (ft_format_c(va_arg(ap, int)));
	if (c == 's')
		return (ft_format_s(va_arg(ap, char *)));
	if (c == 'p')
		return (ft_format_p(va_arg(ap, void *)));
	if (c == 'd')
		return (ft_format_d(va_arg(ap, int)));
	if (c == 'i')
		return (ft_format_d(va_arg(ap, int)));
	if (c == 'u')
		return (ft_format_u(va_arg(ap, int)));
	if (c == 'x')
		return (ft_format_x(va_arg(ap, unsigned long)));
	if (c == 'X')
		return (ft_format_lx(va_arg(ap, unsigned long)));
	if (c == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

int	ft_printf_2(va_list ap, const char *str)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] && str[i] == '%')
		{
			result += ft_print_format_specifier(ap, str[++i]);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i++], 1);
			result++;
		}
	}
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		result;

	if (!str)
		return (-1);
	va_start(ap, str);
	result = ft_printf_2(ap, str);
	va_end(ap);
	return (result);
}
