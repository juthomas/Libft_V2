/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 22:53:49 by juthomas          #+#    #+#             */
/*   Updated: 2018/10/22 22:53:49 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char *new;

	if (!(new = ft_stralloc(ft_strlen((const char*)s1))))
		return (NULL);
	ft_strcpy((char*)new, (const char*)s1);
	return ((char*)new);
}