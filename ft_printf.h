/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:19:25 by taehykim          #+#    #+#             */
/*   Updated: 2022/03/31 16:14:11 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

char	*ft_dec_to_hex(unsigned long long num, int type);
int		ft_format_p(void *ptr);
int		ft_format_u(unsigned int nbr);
int		ft_format_x(unsigned long long x);
int		ft_format_lx(unsigned long long x);
int		digit_count(long x);
int		digit_count_16(unsigned long long x);
int		ft_format_c(int c);
int		ft_format_s(char *s);
int		ft_format_d(int d);
char	*ft_dec_to_u(unsigned int nbr);
int		ft_printf(const char *str, ...);
int		ft_format_else(char c);

#endif
