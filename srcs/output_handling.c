/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_handling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 20:06:23 by edehmlow          #+#    #+#             */
/*   Updated: 2018/09/11 21:36:59 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inclds/ft_printf.h"

t_output		*out_overflow(struct s_output *out)
{
	char *temp;

	out.maxlen = out.maxlen * 2;
	temp = out.output;
	out.output = (char *)ft_memalloc(sizeof(char) * out.maxlen);
	ft_strcpy(out.output, temp);
	free(&temp);
}

t_output		*out_initalize()
{
	struct output	*out;

	out.maxlen = 512;
	out.output = (char *)ft_memalloc(sizeof(char) * out.maxlen);
	
	return (out);
}
