/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stralloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 00:25:29 by juthomas          #+#    #+#             */
/*   Updated: 2018/10/22 23:11:34 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_stralloc(size_t size)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return ((char*)NULL);
	return ((char*)str);
}