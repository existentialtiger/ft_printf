/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_handling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 21:50:19 by edehmlow          #+#    #+#             */
/*   Updated: 2018/09/11 21:58:02 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inclds/ft_printf.h"

t_info	*flag_management(struct s_info *info)
{
	if (info.flags.plus && info.flags,space)
		info.flags.space = 0;
	if (info.flags.
}

t_info	*flag_flip(char *str, int i)
{
	struct s_info	info;

	while (!chk_fot_char(TYPE, str[i]))
	{
		if (str[i] == '#')
			info.flags.pound = 1;
		else if (str[i] == '0')
			info.flags.zero = 1;
		else if (str[i] == '-')
			info.flags.minus = 1;
		else if (str[i] == '+')
			info.flags.plus = 1;
		else if (str[i] == ' ')
			info.flags.space = 1;
		else if (str[i] == '.')
		{
			i++;
			info.specs.percision = ft_atoi(str);
			i = i + ft_numlen(info.specs.percision) - 1;
		}xxx
		else if (str[i] >= '0' && str[i] <= '9')
		{
			info.specs.width = ft_atoi(str);
			i = i + ft_numlen(info.specs.width) - 1;
		}
		i++;
	}
	// may need to return i instead of t_info * to keep place in format str
}
