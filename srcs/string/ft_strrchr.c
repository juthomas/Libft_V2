/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 21:02:45 by juthomas          #+#    #+#             */
/*   Updated: 2018/10/24 21:02:45 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *tmp;

	tmp = s;
	while (*s)
		s++;
	s--;
	while (s != tmp && *s != c)
		s--;
	return ((*s == c) ? (char*)s : NULL);
}