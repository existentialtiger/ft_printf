/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:21:50 by edehmlow          #+#    #+#             */
/*   Updated: 2018/09/11 21:29:37 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	percent_seen()
{
		
}

t_info	flag_flip(char *str, int i)
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

	
}


int		ft_printf(const char *str, ...)
{
	struct output	*out;
	struct s_info	*info;
	int				i;

	out = out_initalize();
	i = 0;
	while(str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				i++;
				//add % to out.output;

			}
			else
			{
				while (!chk_for_char(TYPE, str[i]))
				{
					//turn flags on & store percision/width
					*info = flag_flip();
					get_percis_width();

				}
				//call actions based on flags
			}

		}
		else
		{
			//add to buffer
		}
		i++;
	}
	return (chrcnt); //off by one right now (starts at 0);
}
