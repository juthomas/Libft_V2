/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 00:27:45 by juthomas          #+#    #+#             */
/*   Updated: 2018/10/22 23:12:25 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = ft_stralloc(size)))
		return ((char*)NULL);
	ft_bzero(str, size + 1);
	return ((char*)str);
}