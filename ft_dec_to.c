/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:11:27 by taehykim          #+#    #+#             */
/*   Updated: 2022/03/30 19:15:48 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	digit_count_16(unsigned long long x)
{
	int	cnt;

	cnt = 0;
	while (x > 0)
	{
		cnt++;
		x /= 16;
	}
	return (cnt);
}

int	digit_count(unsigned int x)
{
	int	cnt;

	cnt = 0;
	while (x > 0)
	{
		cnt++;
		x /= 10;
	}
	return (cnt);
}

char	*ft_dec_to_hex(unsigned long long num, int type)
{
	char			*result;
	int				len;

	len = digit_count_16(num);
	if (num == 0)
		len = 1;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	len--;
	while (len >= 0)
	{
		if (type == 1)
			result[len--] = "0123456789abcdef"[num % 16];
		else
			result[len--] = "0123456789ABCDEF"[num % 16];
		num /= 16;
	}
	return (result);
}

char	*ft_dec_to_u(unsigned int x)
{
	char	*result;
	int		len;

	len = digit_count(x);
	if (x == 0)
		len = 1;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	len--;
	while (len >= 0)
	{
		result[len--] = "0123456789"[x % 10];
		x /= 10;
	}
	return (result);
}
