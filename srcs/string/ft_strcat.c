/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 20:16:55 by juthomas          #+#    #+#             */
/*   Updated: 2018/10/24 20:16:55 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	while (*s1)
		s1++;
	while (*s2)
		*(s1++) = *(s2++);
	*s1 = 0;
	return ((char*)s1);
}