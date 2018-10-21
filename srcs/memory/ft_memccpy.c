/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 23:02:51 by juthomas          #+#    #+#             */
/*   Updated: 2018/10/21 23:02:51 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	while (n--)
	{
		*(char*)dst = *(const char*)src++;
		if (*(char*)dst++ == c)
			return ((void*)dst);
	}
	return (NULL);
}