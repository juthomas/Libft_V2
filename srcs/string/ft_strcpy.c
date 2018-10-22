/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 00:13:18 by juthomas          #+#    #+#             */
/*   Updated: 2018/10/22 23:11:55 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char *tmp;

	tmp = dest;
	while (*src)
		*dest++ = *src++;
	return ((char*)tmp);
}