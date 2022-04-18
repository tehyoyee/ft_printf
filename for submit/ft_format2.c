/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:17:57 by taehykim          #+#    #+#             */
/*   Updated: 2022/03/31 16:13:34 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_x(unsigned int x)
{
	char	*result;
	int		len;

	result = ft_dec_to_hex(x, 1);
	len = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	result = NULL;
	return (len);
}

int	ft_format_lx(unsigned int x)
{
	char	*result;
	int		len;

	result = ft_dec_to_hex(x, 0);
	len = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	result = NULL;
	return (len);
}

int	ft_format_u(unsigned int nbr)
{
	char	*result;
	int		len;

	result = ft_dec_to_u(nbr);
	len = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	result = NULL;
	return (len);
}

int	ft_format_else(char c)
{
	ft_putchar_fd('%', 1);
	if (c == '%')
		return (1);
	else if (!c)
		return (1);
	else
	{
		ft_putchar_fd(c, 1);
		return (2);
	}
}
