/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_tmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 22:21:05 by juthomas          #+#    #+#             */
/*   Updated: 2018/10/22 22:21:05 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove_tmp(void *dst, const void *src, size_t len)
{
	void *tmp;

	if (!(tmp = (void*)malloc(sizeof(void) * (len + 1))))
		return (NULL);
	tmp = ft_memcpy((void*)tmp, (const void*)src, (size_t)len);
	dst = ft_memcpy((void*)dst, (void*)tmp, (size_t)len);
	free((void*)tmp);
	return ((void*)dst);
}