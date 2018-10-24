/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 20:05:16 by juthomas          #+#    #+#             */
/*   Updated: 2018/10/24 20:05:16 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strncpy(char *restrict dst, const char *restrict src, size_t n)
{
	while (n-- && *src)
		*(char*)dst = *(char*)src;
	while (n--)
		*(char*)dst = 0;
	return ((char*)dst);
}