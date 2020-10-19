/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:51:33 by juthomas          #+#    #+#             */
/*   Updated: 2020/10/19 19:11:07 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Need Norm

#include "../../includes/libft.h"

static void	ft_put_exa(int nb, int len)
{
	if (len > 0)
		ft_put_exa(nb / 16, len - 1);
	if (nb % 16 >= 0 && nb % 16 <= 9)
		ft_putchar(nb % 16 + 48);
	else
		ft_putchar(nb % 16 + 'a' - 10);
}


void		ft_print_memory(const void *addr, size_t size)
{
	unsigned int		i;
	unsigned int		tmp;
	unsigned char		*visi;
	short int			first;
	unsigned int		re;


	visi = (unsigned char *)addr;
	i = 0;
	tmp = 0;
	first = 1;
	while (i < size)
	{
		ft_put_exa(visi[i], 1);
		if (i % 2 == 1 && i != 0)
			ft_putstr(" ");
		if ((i + 1) % 16 == 0 && i != 0)
		{
			first = 0;
			while ((tmp ) % 16 != 0 || first == 0)
			{
				if (visi[tmp] >= 32 && visi[tmp] <= 126)
					ft_putchar(visi[tmp]);
				else
					ft_putchar('.');
				first = 1;
				tmp++;
			}
			ft_putchar('\n');
			tmp = i + 1;
		}
		i++;
	}
	if ((i) % 16 != 0 && i != 0)
	{
		re = (16 - (i % 16)) * 2;
		re = re + ((16 - (i % 16) + 1) / 2);
		while (re > 0)
		{
			ft_putchar(' ');
			re--;
		}
		first = 0;
		while (tmp < size)
		{
			if (visi[tmp] >= 32 && visi[tmp] <= 126)
				ft_putchar(visi[tmp]);
			else
				ft_putchar('.');
			first = 1;
			tmp++;
		}
		ft_putchar('\n');
		tmp = i;
	}
}