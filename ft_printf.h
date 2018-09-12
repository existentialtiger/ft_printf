/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:40:46 by edehmlow          #+#    #+#             */
/*   Updated: 2018/09/11 21:29:32 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> /* for write */
# include <locale.h> /* for setlocale */
# include <stdlib.h> /* for malloc, free, exit */
# include <stdarg.h> /* for stdarg */
# include "libft/inclds/libft.h"
# define TYPE "sSpdDioOuUxXcC"

int					ft_printf(const char *str, ...);

typedef struct		s_flags
{
	uint8_t			pound: 1;
	uint8_t			zero: 1;
	uint8_t			minus: 1;
	uint8_t			plus: 1;
	uint8_t			space: 1;
}					t_flags;

/*typedef struct		s_mods
}
	hh;
	h;
	l;
	ll;
	j;
	z;
}					t_mods; */

typedef struct		s_specs
{
	int				percision;
	int				width;
}					t_specs;

typedef struct		s_info
{
	t_flags			flags;
	t_specs			specs;
}					t_info;

typedef struct		s_output
{
	char			*output;
	int				maxlen;
	int				chrcnt;
}					t_output;

