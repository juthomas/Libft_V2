/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 22:21:44 by juthomas          #+#    #+#             */
/*   Updated: 2018/10/22 22:21:44 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;
	int		i;

	tmp = dst;
	if (dst <= src)
	{
		while (len--)
			*(char*)dst++ = *(const char*)src++;
	}
	else
	{
		dst = &dst[len];
		src = &dst[len];
		while (len--)
			*(char*)dst-- = *(const char*)src--;
	}
	return ((void*)tmp);
}