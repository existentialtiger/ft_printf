/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:21:50 by edehmlow          #+#    #+#             */
/*   Updated: 2018/09/11 21:58:07 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inclds/ft_printf.h"

void	percent_seen()
{
		
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
				//turn flags on & store percision/width
				*info = flag_flip();
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
