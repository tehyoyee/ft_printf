/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:17:57 by taehykim          #+#    #+#             */
/*   Updated: 2022/03/29 19:12:50 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_x(unsigned long long x)
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

int	ft_format_lx(unsigned long long x)
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
