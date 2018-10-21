/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 23:34:03 by juthomas          #+#    #+#             */
/*   Updated: 2018/10/21 23:34:03 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret;

	if (!(ret = (void*)malloc(sizeof(void) * size)))
		return (NULL);
	ft_bzero(ret, size);
	return (ret);
}